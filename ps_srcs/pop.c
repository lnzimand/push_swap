/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:56:22 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 14:38:56 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	pop(t_stack **top)
{
	t_stack	*temp;

	if (*top == NULL)
	{
		ft_putendl("Stack underflow");
		exit(1);
	}
	temp = (*top)->next;
	lstdel(*top);
	*top = temp;
}
