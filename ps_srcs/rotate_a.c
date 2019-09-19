/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:03:52 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 11:25:16 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ra(t_stack **top_a)
{
	t_stack	*current;
	t_stack	*last;

	current = *top_a;
	last = *top_a;
	*top_a = current->next;
	while (current->next != NULL)
		current = current->next;
	current->next = last;
	last->next = NULL;
}
