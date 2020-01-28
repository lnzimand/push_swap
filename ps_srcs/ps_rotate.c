/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:55:06 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 17:07:35 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ps_ra(t_stack **top_a)
{
	ft_putendl("ra");
	ra_rb(top_a);
}

void	ps_rb(t_stack **top_b)
{
	ft_putendl("rb");
	ra_rb(top_b);
}
