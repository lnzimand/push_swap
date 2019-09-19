/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:01:59 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 14:56:31 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_stack **top_b)
{
	int		temp;
	t_stack	*current;

	current = (*top_b)->next;
	temp = (*top_b)->data;
	(*top_b)->data = current->data;
	current->data = temp;
}
