/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:06:54 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 11:30:40 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	rrb(t_stack **top_b)
{
	t_stack	*last;
	t_stack	*first;

	last = *top_b;
	first = *top_b;
    while (last->next->next != NULL) {
        last = last->next;
    }
    *top_b = last->next;
    last->next->next = first;
    last->next = NULL;
}
