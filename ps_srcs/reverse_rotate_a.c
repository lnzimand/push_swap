/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:06:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 11:30:18 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	rra(t_stack **top_a)
{
	t_stack	*last;
	t_stack	*first;

	last = *top_a;
	first = *top_a;
    while (last->next->next != NULL) {
        last = last->next;
    }
    *top_a = last->next;
	last->next->next = first;
    last->next = NULL;
}
