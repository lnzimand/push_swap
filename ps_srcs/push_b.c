/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:57:30 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 12:58:26 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack **top_b, int data)
{
	t_stack	*temp;

	temp = alloc();
	temp->data = data;
	temp->next = *top_b;
	*top_b = temp;
}
