/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:59:32 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 08:23:16 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa_pb(t_stack **top, int data)
{
	t_stack	*temp;

	temp = alloc();
	temp->data = data;
	temp->next = *top;
	*top = temp;
}
