/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_both.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:12:27 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 17:19:23 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ps_ss(t_stack **top_a, t_stack **top_b)
{
	ft_putendl("ss");
	ss(top_a, top_b);
}

void	ps_rrr(t_stack **top_a, t_stack **top_b)
{
	ft_putendl("rrr");
	rrr(top_a, top_b);
}

void	ps_rr(t_stack **top_a, t_stack **top_b)
{
	ft_putendl("rr");
	rr(top_a, top_b);
}

