/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:01:05 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 14:55:19 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **top_a)
{
	int		temp;
	t_stack	*current;

	current = (*top_a)->next;
	temp = (*top_a)->data;
	(*top_a)->data = current->data;
	current->data = temp;
}
