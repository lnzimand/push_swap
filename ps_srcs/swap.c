/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:01:05 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 08:57:34 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_sb(t_stack **top)
{
	int		temp;
	t_stack	*current;

	current = (*top)->next;
	temp = (*top)->data;
	(*top)->data = current->data;
	current->data = temp;
}
