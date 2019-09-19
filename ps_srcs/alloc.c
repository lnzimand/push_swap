/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:52:50 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 14:34:03 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

t_stack	*alloc(void)
{
	t_stack	*new;

	if (!(new = (t_stack*)malloc(sizeof(t_stack))))
	{
		ft_putendl("Insufficient memory");
		exit(1);
	}
	return (new);
}
