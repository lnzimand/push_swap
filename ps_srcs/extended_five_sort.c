/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extended_five_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:51:18 by lnzimand          #+#    #+#             */
/*   Updated: 2020/01/28 12:52:17 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

int		ex_five_sort(t_stack **top_a, t_stack **top_b)
{
	int		index;
	int		num_index;
	int		holder;
	t_stack	*temp;

	index = 0;
	num_index = 0;
	if (list_length(*top_a) == 3)
	{
		ps_three_sort_a(top_a);
		return (0);
	}
	holder = biggest_int(*top_a);
	temp = *top_a;
	while (temp != NULL)
	{
		if (temp->data < holder)
		{
			holder = temp->data;
			num_index = index + 1;
		}
		temp = temp->next;
		index++;
	}
	solve(top_a, top_b, num_index);
	return (index ? 1 : 0);
}
