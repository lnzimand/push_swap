/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:55:30 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 14:34:26 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	display(t_stack *top)
{
	t_stack	*temp;

	if (top == NULL)
	{
		ft_putendl("Stack underflow");
		exit(1);
	}
	else
	{
		temp = top;
		while (temp)
		{
			ft_putnbr(temp->data);
			ft_putchar('\n');
			temp = temp->next;
		}
	}
}
