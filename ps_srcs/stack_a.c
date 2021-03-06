/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:01:19 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 09:29:22 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	prep_stack(char **arr, t_stack **stack, int count)
{
	while (count > 1)
	{
		pa_pb(stack, ft_atoi(arr[count - 1]));
		count--;
	}
}
