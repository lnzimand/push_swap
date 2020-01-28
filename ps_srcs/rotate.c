/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:03:52 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 09:01:07 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ra_rb(t_stack **top)
{
	t_stack	*current;
	t_stack	*last;

	current = *top;
	last = *top;
	*top = current->next;
	while (current->next != NULL)
		current = current->next;
	current->next = last;
	last->next = NULL;
}
