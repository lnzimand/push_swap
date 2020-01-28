/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:06:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 09:02:28 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	rra_rrb(t_stack **top)
{
	t_stack	*last;
	t_stack	*first;

	last = *top;
	first = *top;
    while (last->next->next != NULL) {
        last = last->next;
    }
    *top = last->next;
	last->next->next = first;
    last->next = NULL;
}
