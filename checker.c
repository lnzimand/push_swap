/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:10:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 10:59:23 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	lstdel(t_stack *lst)
{
	free(lst);
}

t_stack	*alloc(void)
{
	t_stack	*new;

	if (!(new = (t_stack*)malloc(sizeof(t_stack))))
	{
		ft_putendl("Insufficient memory");
		exit(1);
	}
	return (new);
}

void	display(t_stack *top)
{
	t_stack	*temp;

	if (top == NULL)
	{
		ft_putendl("Stack underflow");
		exit(1);
	}
	else
	{
		temp = top;
		while (temp)
		{
			ft_putnbr(temp->data);
			ft_putchar('\n');
			temp = temp->next;
		}
	}
}

void	pop(t_stack **top)
{
	t_stack	*temp;

	if (*top == NULL)
	{
		ft_putendl("Stack underflow");
		exit(1);
	}
	temp = (*top)->next;
	lstdel(*top);
	*top = temp;
}

void	pb(t_stack **top_b, int data)
{
	t_stack	*temp;

	temp = alloc();
	temp->data = data;
	temp->next = *top_b;
	*top_b = temp;
}

void	pa(t_stack **top_a, int data)
{
	t_stack	*temp;

	temp = alloc();
	temp->data = data;
	temp->next = *top_a;
	*top_a = temp;
}

void	sa(t_stack **top_a)
{
	ft_putendl("sa");
	int		temp;
	t_stack	*current;

	current = (*top_a)->next;
	temp = (*top_a)->data;
	(*top_a)->data = current->data;
	current->data = temp;
}

void	sb(t_stack **top_b)
{
	ft_putendl("sb");
	int		temp;
	t_stack	*current;

	current = (*top_b)->next;
	temp = (*top_b)->data;
	(*top_b)->data = current->data;
	current->data = temp;
}

void	ss(t_stack **top_a, t_stack **top_b)
{
	sa(top_a);
	sb(top_b);
}

void	ra(t_stack **top_a)
{
	ft_putendl("ra");
	t_stack	*current;
	t_stack	*last;

	current = *top_a;
	last = *top_a;
	*top_a = current->next;
	while (current->next != NULL)
		current = current->next;
	current->next = last;
	last->next = NULL;
}

void	rb(t_stack **top_b)
{
	ft_putendl("rb");
	t_stack	*current;
	t_stack	*last;

	current = *top_b;
	last = *top_b;
	*top_b = current->next;
	while (current->next != NULL)
		current = current->next;
	current->next = last;
	last->next = NULL;
}

void	rr(t_stack **top_a, t_stack **top_b)
{
	ra(top_a);
	rb(top_b);
}

void	rra(t_stack **top_a)
{
	ft_putendl("rra");
	t_stack	*last;
	t_stack	*first;

	last = *top_a;
	first = *top_a;
    while (last->next->next != NULL) { 
        last = last->next; 
    } 
    *top_a = last->next; 
	last->next->next = first;
    last->next = NULL;
}

void	rrb(t_stack **top_b)
{
	ft_putendl("rrb");
	t_stack	*last;
	t_stack	*first;

	last = *top_b;
	first = *top_b;
    while (last->next->next != NULL) {
        last = last->next;
    }
    *top_b = last->next;
    last->next->next = first;
    last->next = NULL;
}

void	rrr(t_stack **top_a, t_stack **top_b)
{
	rra(top_a);
	rrb(top_b);
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

/*void	sort_b(t_stack *top_b)
{
	if (top_b->data < top_b->next->data)
		sb(&top_b);
	else
		return ;
}*/

void	sort_a(t_stack **top_a)
{
	if ((*top_a)->data < (*top_a)->next->next->data && (*top_a)->next->data > (*top_a)->next->next->data)
	{
		sa(top_a);
		ra(top_a);
	}
	else if ((*top_a)->next->data < (*top_a)->data && (*top_a)->data < (*top_a)->next->next->data)
		sa(top_a);
	else if ((*top_a)->next->next->data < (*top_a)->data && (*top_a)->data < (*top_a)->next->data)
		rra(top_a);
	else if ((*top_a)->next->data < (*top_a)->next->next->data && (*top_a)->data > (*top_a)->next->next->data)
		ra(top_a);
	else if ((*top_a)->data > (*top_a)->next->data && (*top_a)->next->data > (*top_a)->next->next->data)
	{
		ra(top_a);
		sa(top_a);
	}
	else
		return ;
}

/*void	five_sort(void)
{
	int		index;

	index = 0;
	while (index < 2)
	{
		pb(top_a->data);
		pop(&top_a);
		index++;
	}
	sort_a();
	sort_b();
}*/

void	push_swap(t_stack **top_a, int type)
{
//	if (type == 4)
//		sort_a(top_a);
/*	else if (type == 6)
		five_sort();*/
}

int		main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
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
			pa(&top_a, ft_atoi(arr[index2 - 1]));
			index2--;
		}
		ft_putchar('\n');
		display(top_a);
		ft_putchar('\n');
		push_swap(&top_a, argc);
//		display(top_b);
		display(top_a);
		ft_putchar('\n');
	}
	return (0);
}
