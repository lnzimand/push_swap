/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:54:42 by lnzimand          #+#    #+#             */
/*   Updated: 2020/01/28 12:56:33 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	ps_three_sort_b(t_stack **top_b)
{
	t_stack	*last;

	last = stack_bottom(*top_b);
	if ((*top_b)->data < last->data && (*top_b)->next->data > last->data)
		ps_rb(top_b);
	else if ((*top_b)->next->data < (*top_b)->data && (*top_b)->data < last->data)
		ps_rrb(top_b);
	else if (last->data < (*top_b)->data && (*top_b)->data < (*top_b)->next->data)
		ps_sb(top_b);
	else if ((*top_b)->next->data < last->data && (*top_b)->data > last->data)
	{
		ps_rrb(top_b);
		ps_sb(top_b);
	}
	else if ((*top_b)->data < (*top_b)->next->data && (*top_b)->next->data < last->data)
	{
		ps_sb(top_b);
		ps_rrb(top_b);
	}
	else
		return ;
}

void	ps_three_sort_a(t_stack **top_a)
{
	t_stack	*last;

	last = stack_bottom(*top_a);
	if ((*top_a)->data < last->data && (*top_a)->next->data > last->data)
	{
		ps_sa(top_a);
		ps_ra(top_a);
	}
	else if ((*top_a)->next->data < (*top_a)->data && (*top_a)->data < last->data)
		ps_sa(top_a);
	else if (last->data < (*top_a)->data && (*top_a)->data < (*top_a)->next->data)
		ps_rra(top_a);
	else if ((*top_a)->next->data < last->data && (*top_a)->data > last->data)
		ps_ra(top_a);
	else if ((*top_a)->data > (*top_a)->next->data && (*top_a)->next->data > last->data)
	{
		ps_ra(top_a);
		ps_sa(top_a);
	}
	else
		return ;
}

void	onetothree(t_stack **top_a, t_stack **top_b, int num_index)
{
	if (num_index == 2)
		ps_sa(top_a);
	else if (num_index == 3)
	{
		ps_ra(top_a);
		ps_sa(top_a);
	}
	ps_push_to_b(top_a, top_b);
}

void	solve(t_stack **top_a, t_stack **top_b, int num_index)
{
	if (num_index < 4)
		onetothree(top_a, top_b, num_index);
	else if (num_index == 4)
	{
		if (list_length(*top_a) == 5)
		{
			ps_rra(top_a);
			ps_rra(top_a);
		}
		else
			ps_rra(top_a);
		ps_push_to_b(top_a, top_b);
	}
	else
	{
		ps_rra(top_a);
		ps_push_to_b(top_a, top_b);
	}
}

void	ps_two_sort_a(t_stack **top_a)
{
	ft_putendl("sa");
	sa_sb(top_a);
}

void	ps_two_sort_b(t_stack **top_b)
{
	ft_putendl("sb");
	sa_sb(top_b);
}
