/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_and_min_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:37 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 11:24:01 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		big_than_int(int ac, char **arr)
{
	int		index;

	index = 1;
	while (index < ac)
	{
		ft_atol(arr[index]);
		if (ft_atol(arr[index]) > 2147483647 || ft_atol(arr[index]) < -2147483647)
			return (1);
		index++;
	}
	return (0);
}
