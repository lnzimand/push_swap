/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:10:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 17:11:21 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

int		is_sa(int a, int b, int c)
{
	if (a > b && a < c)
		return (1);
	return (0);
}

int		is_sb(int a, int b, int c)
{
	if (a < b && a > c)
		return (1);
	else if (b > a && b <= c)
		return (1);
	return (0);
}

int		is_ra(int a, int b, int c)
{
	if (b < c && a > c)
		return (1);
	else if (b < a && b > c)
		return (1);
	return (0);
}

int		is_rb(int a, int b, int c)
{
	if (c > a && c < b)
		return (1);
	return (0);
}

int		is_rra(int a, int b, int c)
{
	if (a < b && a > c)
		return (1);
	else if (a < c && b > c)
		return (1);
	return (0);
}

int		is_rrb(int a, int b, int c)
{
	if (a > b && a < c)
		return (1);
	else if (c < a && c > b)
		return (1);
	return (0);
}

t_stack	*stack_bottom(t_stack *head)
{
	while (head->next != NULL)
		head = head->next;
	return (head);
}

int		dual_action(t_stack *a, t_stack *b)
{
	int		frst_a;
	int		frst_b;
	int		scnd_a;
	int		scnd_b;
	int		last_a;
	int		last_b;

	frst_a = a->data;
	frst_b = b->data;
	scnd_a = a->next->data;
	scnd_b = b->next->data;
	last_a = stack_bottom(a)->data;
	last_b = stack_bottom(b)->data;
	if (is_sa(frst_a, scnd_a, last_a) && is_sb(frst_b, scnd_b, last_b))
		return(1);
	else if (is_ra(frst_a, scnd_a, last_a) && is_rb(frst_b, scnd_b, last_b))
		return (1);
	else if (is_rra(frst_a, scnd_a, last_a) && is_rrb(frst_b, scnd_b, last_b))
		return (1);
	else
		return (0);	
}

void	execute_dual(t_stack **a, t_stack **b)
{
	int		frst_a;
	int		frst_b;
	int		scnd_a;
	int		scnd_b;
	int		last_a;
	int		last_b;

	frst_a = (*a)->data;
	frst_b = (*b)->data;
	scnd_a = (*a)->next->data;
	scnd_b = (*b)->next->data;
	last_a = stack_bottom(*a)->data;
	last_b = stack_bottom(*b)->data;
	if (is_sa(frst_a, scnd_a, last_a) && is_sb(frst_b, scnd_b, last_b))
		ps_ss(a, b);
	else if (is_ra(frst_a, scnd_a, last_a) && is_rb(frst_b, scnd_b, last_b))
		ps_rr(a, b);
	else if (is_rra(frst_a, scnd_a, last_a) && is_rrb(frst_b, scnd_b, last_b))
		ps_rrr(a, b);
	return ;
}

void	sort_b(t_stack **b)
{
	t_stack	*last;

	last = stack_bottom(*b);
	if ((*b)->data > (*b)->next->data)
	{
		if ((*b)->next->data > last->data)
			return ;
		else
			ps_rrb(b);
	}
	else if ((*b)->data > last->data)
		ps_sb(b);
	else
		ps_rb(b);
	return ;
}

void	two_sort_a(t_stack **a, t_stack **b)
{
	if ((*a)->data < (*a)->next->data)
		ps_push_to_b(a, b);
	else
	{
		ps_sa(a);
		ps_push_to_b(a, b);
	}
}

void	sort_a(t_stack **a, t_stack **b)
{
	t_stack	*last;

	last = stack_bottom(*a);
	if (list_length(*a) == 2)
		two_sort_a(a, b);
	else if ((*a)->data < (*a)->next->data)
	{
		if ((*a)->next->data < last->data || (*a)->data < last->data)
			ps_push_to_b(a, b);
		else
			ps_rra(a);
	}
	else if ((*a)->data < last->data || (*a)->next->data > last->data)
		ps_sa(a);
	else
		ps_ra(a);
	return ;
}

void	move_down(t_stack **a, t_stack **b, int num)
{
	while (num > 0)
	{
		if (num == 1)
			ps_push_to_a(a, b);
		else
		{
			if ((*a)->data < (*b)->data)
				ps_push_to_a(a, b);
			ps_rrb(b);
		}
		num--;
	}
}

void	move_up(t_stack **a, t_stack **b, int num)
{
	while (num > 0)
	{
		if (num == 1)
			ps_push_to_a(a, b);
		else
		{
			if ((*a)->data < (*b)->data)
				ps_push_to_a(a, b);
			ps_rb(b);
		}
		num--;
	}
}

distance	getindexes(t_stack *top)
{
	t_stack		*temp;
	t_stack		*holder;
	distance	indexes;
	int			index;

	index = 1;
	temp = top;
	holder = top;
	indexes.to_top = 1;
	indexes.to_bottom = 1;
	while (temp)
	{
		if (holder->data < temp->data)
		{
			indexes.to_top = index;
			holder = temp;
		}
		index++;
		temp = temp->next;
	}
	indexes.to_bottom = index - indexes.to_top + 1;
	return (indexes);
}

void	move_back_to_a(t_stack **a, t_stack **b)
{
	distance	movement;

	while (list_length(*b) > 0 && sorted_arr(a))
	{
		movement = getindexes(*b);
		if (movement.to_top < movement.to_bottom)
			move_up(a, b, movement.to_top);
		else if (movement.to_top > movement.to_bottom)
			move_down(a, b, movement.to_bottom);
		else
			move_up(a, b, movement.to_top);
	}
	if (!sorted_arr(a))
		sort(a, b);
}

void	sort(t_stack **a, t_stack **b)
{
	while (!sorted_arr(a))
	{
		if (list_length(*b) > 1)
		{
			if (dual_action(*a, *b))
				execute_dual(a, b);
			else
			{
				sort_a(a, b);
				if (dual_action(*a, *b))
					execute_dual(a, b);
				sort_b(b);
			}
		}
		else
			sort_a(a, b);
	}
	move_back_to_a(a, b);
}

void	freeList(t_stack *head)
{
	t_stack *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

int		main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	char	**arr;
	char	*temp;

	top_a = NULL;
	top_b = NULL;
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
		if (argc < 7)
			five_sort(&top_a, &top_b);
		else
			sort(&top_a, &top_b);
		freeList(top_a);
	}
	return (0);
}
