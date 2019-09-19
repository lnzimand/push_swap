/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:56:33 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/11 14:23:26 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		array_length(char **arr)
{
	int		index;

	index = 0;
	while (arr[index] != NULL)
		index++;
	return (index);
}
