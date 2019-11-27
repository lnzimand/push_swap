/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:10:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/11/27 12:59:46 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int		biggest_int(t_stack *stack)
{
	int		big;

	big = 0;
	while (stack != NULL)
	{
		if (big < stack->data)
			big = stack->data;
		stack = stack->next;
	}
	return (big);
}

void	push_to_a(t_stack **top_a, t_stack **top_b)
{
	pa(top_a, (*top_b)->data);
	pop(top_b);
}

void	push_to_b(t_stack **top_a, t_stack **top_b)
{
	pb(top_b, (*top_a)->data);
	pop(top_a);
}

void	solve(t_stack **top_a, t_stack **top_b, int num_index)
{
	if (num_index == 1)
	{
		ft_putendl("pb");
		push_to_b(top_a, top_b);
	}
	else if (num_index == 2)
	{
		ft_putendl("sa\npb");
		sa(top_a);
		push_to_b(top_a, top_b);
	}
	else if (num_index == 3)
	{
		ft_putendl("ra\nsa\npb");
		ra(top_a);
		sa(top_a);
		push_to_b(top_a, top_b);
	}
	else if (num_index == 4)
	{
		if (list_length(*top_a) == 5)
		{
			ft_putendl("rra\nrra\npb");
			rra(top_a);
			rra(top_a);
			push_to_b(top_a, top_b);
		}
		else
		{
			ft_putendl("rra\npb");
			rra(top_a);
			push_to_b(top_a, top_b);
		}
	}
	else
	{
		ft_putendl("rra\npb");
		rra(top_a);
		push_to_b(top_a, top_b);
	}
}

int		ex_five_sort(t_stack **top_a, t_stack **top_b)
{
	int		index;
	int		num_index;
	int		holder;
	t_stack	*temp;

	index = 0;
	num_index = 0;
	if (list_length(*top_a) == 3)
	{
		three_sort_a(top_a);
		return (0);
	}
	holder = biggest_int(*top_a);
	temp = *top_a;
	while (temp != NULL)
	{
		if (temp->data < holder)
		{
			holder = temp->data;
			num_index = index + 1;
		}
		temp = temp->next;
		index++;
	}
	solve(top_a, top_b, num_index);
	return (index ? 1 : 0);
}

int		push_back_to_a(t_stack **top_a, t_stack **top_b)
{
	if ((*top_b)->data)
	{
		ft_putendl("pa");
		push_to_a(top_a, top_b);
	}
	return (list_length(*top_b));
}

void	five_sort(t_stack **top_a, t_stack **top_b)
{
	int		check_a;
	int		check_b;

	check_a = 1;
	check_b = 1;
	if (list_length(*top_a) == 3)
	{
		three_sort_a(top_a);
		return ;
	}
	while (check_a)
		check_a = ex_five_sort(top_a, top_b);
	while (check_b)
		check_b = push_back_to_a(top_a, top_b);
}

int		sorted_arr(t_stack **top_a)
{
	t_stack *temp;
	
	temp = *top_a;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	char	**arr;
	char	*temp;

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
		argc = array_length(arr);
		errors(arr, argc);
		prep_stack(arr, &top_a, argc);
		if (sorted_arr(&top_a))
			return (0);
		ft_putchar('\n');
		display(top_a);
		ft_putchar('\n');
		five_sort(&top_a, &top_b);
		ft_putchar('\n');
		display(top_a);
		ft_putchar('\n');
	}
	return (0);
}
