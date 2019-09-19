/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:04:52 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 11:27:03 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	rb(t_stack **top_b)
{
	t_stack	*current;
	t_stack	*last;

	current = *top_b;
	last = *top_b;
	*top_b = current->next;
	while (current->next != NULL)
		current = current->next;
	current->next = last;
	last->next = NULL;
}
