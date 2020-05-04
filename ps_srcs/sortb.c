/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 11:42:03 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 17:23:40 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	revert_back(t_stack **top_a, t_stack **top_b, distance lengths)
{
	t_stack		*last;

	last = stack_bottom(*top_a);
	while ((*top_b)->data != lengths.max)
	{
		if (ft_strcmp(lengths.dir, "ra"))
		{
			if (last->data < (*top_a)->data && (*top_a)->data < (*top_a)->next->data)
				ps_rrr(top_a, top_b);
			else
				ps_rrb(top_b);
		}
		else
		{
			if ((*top_a)->next->data < last->data && (*top_a)->data > last->data)
				ps_rr(top_a, top_b);
			else
				ps_rb(top_b);
		}
	}

}

void	sort_bottom(t_stack **top_a, t_stack **top_b, distance lengths)
{
	t_stack		*last;

	last = stack_bottom(*top_a);
	if (lengths.to_bottom == 0)
		revert_back(top_a, top_b, lengths);
	else if ((*top_b)->data < (*top_b)->next->data)
	{
		if ((*top_a)->next->data < (*top_a)->data && (*top_a)->data < last->data)
			ps_ss(top_a, top_b);
		else
			ps_sb(top_b);
	}
	else
	{
		if (last->data < (*top_a)->data && (*top_a)->data < (*top_a)->next->data)
			ps_rrr(top_a, top_b);
		else
			ps_rrb(top_b);
	}
}

void	sort_top(t_stack **top_a, t_stack **top_b, distance lengths)
{
	t_stack		*last;

	last = stack_bottom(*top_a);
	if (lengths.to_top == 0)
		revert_back(top_a, top_b, lengths);
	else if ((*top_b)->data < (*top_b)->next->data)
	{
		if ((*top_a)->next->data < (*top_a)->data && (*top_a)->data < last->data)
			ps_ss(top_a, top_b);
		else
			ps_sb(top_b);
	}
	else
	{
		if ((*top_a)->next->data < last->data && (*top_a)->data > last->data)
			ps_rr(top_a, top_b);
		else
			ps_rb(top_b);
	}
}

void	ex_sort_b(t_stack **top_a, t_stack **top_b, distance lengths)
{
	if (lengths.to_top <= lengths.to_bottom)
	{
		lengths.dir = ft_strdup("ra");
		while (lengths.to_top >= 0)
		{
			sort_top(top_a, top_b, lengths);
			lengths.to_top--;
		}
	}
	else
	{
		lengths.dir = ft_strdup("rra");
		while (lengths.to_bottom >= 0)
		{
			sort_bottom(top_a, top_b, lengths);
			lengths.to_bottom--;
		}
	}
}

// void	sort_b(t_stack **top_a, t_stack **top_b)
// {
// 	distance	lengths;

// 	while (!sorted_b(top_b))
// 	{
// 		lengths = get_indexes(*top_b);
// 		ex_sort_b(top_a, top_b, lengths);
// 	}
// }
