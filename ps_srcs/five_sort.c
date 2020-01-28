/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:47:30 by lnzimand          #+#    #+#             */
/*   Updated: 2020/01/28 12:48:51 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	five_sort(t_stack **top_a, t_stack **top_b)
{
	int		check_a;
	int		check_b;

	check_a = 1;
	check_b = 1;
	if (list_length(*top_a) == 3)
	{
		ps_three_sort_a(top_a);
		return ;
	}
	while (check_a)
		check_a = ex_five_sort(top_a, top_b);
	while (check_b)
		check_b = ps_push_back_to_a(top_a, top_b);
}
