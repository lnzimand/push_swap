/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:33:27 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/12 13:34:26 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	three_sort_b(t_stack **top_b)
{
	t_stack	*last;

	last = *top_b;
	while (last->next != NULL)
		last = last->next;
	if ((*top_b)->data < last->data && (*top_b)->next->data > last->data)
		rb(top_b);
	else if ((*top_b)->next->data < (*top_b)->data && (*top_b)->data < last->data)
		rrb(top_b);
	else if (last->data < (*top_b)->data && (*top_b)->data < (*top_b)->next->data)
		sb(top_b);
	else if ((*top_b)->next->data < last->data && (*top_b)->data > last->data)
	{
		rrb(top_b);
		sb(top_b);
	}
	else if ((*top_b)->data < (*top_b)->next->data && (*top_b)->next->data < last->data)
	{
		sb(top_b);
		rrb(top_b);
	}
	else
		return ;
}
