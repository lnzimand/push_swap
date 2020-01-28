/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:01:06 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 17:08:10 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ps_rra(t_stack **top_a)
{
	ft_putendl("rra");
	rra_rrb(top_a);
}

void	ps_rrb(t_stack **top_b)
{
	ft_putendl("rrb");
	rra_rrb(top_b);
}
