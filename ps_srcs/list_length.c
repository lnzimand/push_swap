/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:56:24 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/12 14:00:12 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		list_length(t_stack *top)
{
	int		len;

	len = 0;
	while (top)
	{
		top = top->next;
		len++;
	}
	return (len);
}
