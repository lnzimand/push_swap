/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 07:15:23 by lnzimand          #+#    #+#             */
/*   Updated: 2019/08/28 11:05:56 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
 {
	int		res;
	int		sign;

	res = 0;
	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = 1;
		str++;
	}
	while (*str && (ft_isdigit(*str)))
	{
		res = (res * 10) + (*str++ - '0');
	}
	if (sign)
		return (-res);
	return (res);
 }
