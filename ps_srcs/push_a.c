/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:59:32 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/17 10:06:38 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **top_a, int data)
{
	t_stack	*temp;

	temp = alloc();
	temp->data = data;
	temp->next = *top_a;
	*top_a = temp;
}
