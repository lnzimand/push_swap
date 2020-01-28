/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:53:37 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 16:02:05 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"

void	ps_push_to_a(t_stack **top_a, t_stack **top_b)
{
	ft_putendl("pa");
	pa_pb(top_a, (*top_b)->data);
	pop(top_b);
}

void    ps_push_to_b(t_stack **top_a, t_stack **top_b)
{
	ft_putendl("pb");
	pa_pb(top_b, (*top_a)->data);
	pop(top_a);
}
