/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:58:38 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 16:01:30 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ps_sa(t_stack **top_a)
{
	ft_putendl("sa");
	sa_sb(top_a);
}

void	ps_sb(t_stack **top_b)
{
	ft_putendl("sb");
	sa_sb(top_b);
}
