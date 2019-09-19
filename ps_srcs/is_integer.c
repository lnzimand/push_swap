/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:11:59 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 15:03:14 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

int		is_integer(int ac, char **arr)
{
	int		index_arr;
	int		index_str;
	int		check;

	index_arr = 1;
	check = 0;
	while (index_arr < ac)
	{
		index_str = 0;
		while (arr[index_arr][index_str])
		{
			if (ft_issign(arr[index_arr][index_str]))
				check++;
			if ((!ft_isdigit(arr[index_arr][index_str]) && !ft_issign(arr[index_arr][index_str]))\
				|| (ft_isdigit(arr[index_arr][index_str - 1]) && ft_issign(arr[index_arr][index_str]))
				|| (ft_issign(arr[index_arr][index_str]) && ft_strlen(arr[index_arr]) == 1) || check > 1)
				return (0);
			index_str++;
		}
		index_arr++;
	}
	return (1);
}
