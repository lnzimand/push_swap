/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlastlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 14:49:49 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 14:54:46 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

t_stack *stack_bottom(t_stack *top)
{
	t_stack *temp;

	while (top->next != NULL)
		top = top->next;
	temp = top;
	return (temp);
}
