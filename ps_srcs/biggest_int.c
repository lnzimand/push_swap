/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 11:56:51 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 11:57:53 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

int		biggest_int(t_stack *stack)
{
	int		big;

	big = 0;
	while (stack != NULL)
	{
		if (big < stack->data)
			big = stack->data;
		stack = stack->next;
	}
	return (big);
}
