/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 11:58:23 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 12:16:17 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

int		sorted_b(t_stack **top)
{
	t_stack	*temp;

	temp = *top;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
