/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:09:18 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/10 13:10:17 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		is_dup(int ac, char **arr)
{
	int		index;
	int		check;

	index = 1;
	while (index < ac)
	{
		check = index + 1;
		while (check < ac)
		{
			if (!ft_strcmp(arr[index], arr[check]))
				return (1);
			check++;
		}
		index++;
	}
	return (0);
}
