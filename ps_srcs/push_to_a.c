/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:49:49 by lnzimand          #+#    #+#             */
/*   Updated: 2020/01/28 12:50:32 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

int		ps_push_back_to_a(t_stack **top_a, t_stack **top_b)
{
	if (*top_b != NULL)
		ps_push_to_a(top_a, top_b);
	return (list_length(*top_b));
}
