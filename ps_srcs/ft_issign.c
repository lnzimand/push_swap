/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:10:39 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 13:10:49 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_issign(int ch)
{
	if (ch == '-' || ch == '+')
		return (1);
	return (0);
}