/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_void.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:11:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 13:11:42 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		is_void(int ac, char **arr)
{
	int		index_arr;

	index_arr = 1;
	while (index_arr < ac)
	{
		if (ft_strcmp(arr[index_arr], "") == 0)
			return (1);
		index_arr++;
	}
	return (0);
}
