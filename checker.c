/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:10:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/03 12:00:13 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	lstdel(list *lst)
{
	free(lst);
}

void	push_a(int data)
{
	list	*temp;
	if (!(temp = (list*)malloc(sizeof(list))))
	{
		write(1, "\nInsufficient memory\n", 19);
		exit(1);
	}
	temp->data = data;
	temp->next = top_a;
	top_a = temp;
}

void	display()
{
	list	*temp;

	if (top_a == NULL)
	{
		write(1, "\nStack underflow\n", 17);
		exit(1);
	}
	else
	{
		temp = top_a;
		while (temp)
		{
			ft_putnbr(temp->data);
			write(1, "\n", 1);
			temp = temp->next;
		}
	}
}

void	sa()
{
	ft_putendl("sa");
	int		temp;
	list	*current;

	current = top_a->next;
	temp = top_a->data;
	top_a->data = current->data;
	current->data = temp;
}

void	ra()
{
	ft_putendl("ra");
	list	*current;
	list	*last;

	current = top_a;
	last = top_a;
	top_a = current->next;
	while (current->next != NULL)
		current = current->next;
	current->next = last;
	last->next = NULL;
}

void	rra()
{
	ft_putendl("rra");
	list	*last;
	list	*first;

	last = top_a;
	first = top_a;
    while (last->next != NULL) { 
        last = last->next; 
    } 
    top_a = first->next->next; 
    first->next->next = NULL; 
    last->next = first; 
}

int		big_than_int(int ac, char **arr)
{
	long	num;
	int		index;

	index = 1;
	while (index < ac)
	{
		ft_atol(arr[index]);
		if (ft_atol(arr[index]) > 2147483647 || ft_atol(arr[index]) < -2147483647)
			return (1);
		index++;
	}
	return (0);
}

int		is_dup(int ac, char **arr)
{
	int		index;
	int		check;

	index = 1;
	while (index < ac)
	{
		check = index + 1;
		while (check < ac)
		{
			if (!ft_strcmp(arr[index], arr[check]))
				return (1);
			check++;
		}
		index++;
	}
	return (0);
}

int		ft_issign(int ch)
{
	if (ch == '-' || ch == '+')
		return (1);
	return (0);
}

int		is_void(int ac, char **arr)
{
	int		index_arr;

	index_arr = 1;
	while (index_arr < ac)
	{
		if (ft_strcmp(arr[index_arr], "") == 0)
			return (1);
		index_arr++;
	}
	return (0);
}

int		is_integer(int ac, char **arr)
{
	int		index_arr;
	int		index_str;

	index_arr = 1;
	while (index_arr < ac)
	{
		index_str = 0;
		while (arr[index_arr][index_str])
		{
			if (!ft_isdigit(arr[index_arr][index_str]) && !ft_issign(arr[index_arr][index_str]))
				return (0);
			index_str++;
		}
		index_arr++;
	}
	return (1);
}

void	three_sort(void)
{
	if (top_a->data < top_a->next->next->data && top_a->next->data > top_a->next->next->data)
	{
		sa();
		ra();
	}
	else if (top_a->next->data < top_a->data && top_a->data < top_a->next->next->data)
		sa();
	else if (top_a->next->next->data < top_a->data && top_a->data < top_a->next->data)
		rra();
	else if (top_a->next->data < top_a->next->next->data && top_a->data > top_a->next->next->data)
		ra();
	else if (top_a->data > top_a->next->data && top_a->next->data > top_a->next->next->data)
	{
		ra();
		sa();
	}
	else
		return ;
}

void	five_sort(void)
{
	
}

void	push_swap(int type)
{
	if (type == 4)
		three_sort();
	else if (type == 6)
		five_sort();
}

int		main(int argc, char **argv)
{
	char	**arr;
	char	*temp;
	int		index;
	int		index2;

	index = argc;
	index2 = 0;
	if (argc > 1)
	{
		if (argc == 2)
		{
			temp = ft_strjoin(argv[0], " ");
			temp = ft_strjoin(temp, argv[1]);
			arr = ft_strsplit(temp, ' ');
		}
		else
			arr = argv;
		if (!is_integer(argc, arr) || big_than_int(argc, arr) || is_dup(argc, arr) || is_void(argc, arr))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		while (arr[index2] != NULL)
			index2++;
		argc = index2;
		while (index2 > 1)
		{
			push_a(ft_atoi(arr[index2 - 1]));
			index2--;
		}
		ft_putchar('\n');
		ft_putendl("A BEFORE:");
		display();
		ft_putchar('\n');
		ft_putendl("ACTIONS");
		push_swap(argc);
		ft_putchar('\n');
		ft_putendl("A AFTER:");
		display();
		ft_putchar('\n');
	}
	return (0);
}
