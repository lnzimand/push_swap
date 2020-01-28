/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:39:58 by lnzimand          #+#    #+#             */
/*   Updated: 2020/01/28 12:46:34 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

int		ten_sort(t_stack **top_a, t_stack **top_b)
{
	t_stack	*last;
	int		num;

	last = stack_bottom(*top_a);
	num = !sorted_arr(top_a);
	if (list_length(*top_a) == 5)
		five_sort(top_a, top_b);
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
		ps_push_to_b(top_a, top_b);
	return (num);
}
