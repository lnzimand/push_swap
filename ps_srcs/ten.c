/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:37:27 by lnzimand          #+#    #+#             */
/*   Updated: 2020/01/28 13:17:05 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	sort_ten(t_stack **top_a, t_stack **top_b)
{
	int		check;
	int		check_b;

	check = 1;
	check_b = 1;
	while (check)
	{
		check = ten_sort(top_a, top_b);
		if (list_length(*top_b) > 1)
			sort_b(top_a, top_b);
	}
	while (check_b)
		check_b = ps_push_back_to_a(top_a, top_b);

}
