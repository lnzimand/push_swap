/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 11:51:36 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 11:56:28 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

distance	get_indexes(t_stack *top)
{
	t_stack		*temp;
	t_stack		*holder;
	distance	indexes;
	int			index;

	index = 1;
	temp = holder = top;
	indexes.max = biggest_int(top);
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data && holder->data >= temp->data)
		{
			indexes.to_top = index;
			holder = temp;
		}
		index++;
		temp = temp->next;
	}
	indexes.to_bottom = index - indexes.to_top + 1;
	return (indexes);
}
