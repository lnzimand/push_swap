/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:33:27 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 09:30:25 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	three_sort_a(t_stack **top_a)
{
	t_stack	*last;

	last = *top_a;
	while (last->next != NULL)
		last = last->next;
	if ((*top_a)->data < last->data && (*top_a)->next->data > last->data)
	{
		sa_sb(top_a);
		ra_rb(top_a);
	}
	else if ((*top_a)->next->data < (*top_a)->data && (*top_a)->data < last->data)
		sa_sb(top_a);
	else if (last->data < (*top_a)->data && (*top_a)->data < (*top_a)->next->data)
		rra_rrb(top_a);
	else if ((*top_a)->next->data < last->data && (*top_a)->data > last->data)
		ra_rb(top_a);
	else if ((*top_a)->data > (*top_a)->next->data && (*top_a)->next->data > last->data)
	{
		ra_rb(top_a);
		sa_sb(top_a);
	}
	else
		return ;
}
