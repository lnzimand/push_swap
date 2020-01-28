/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 13:46:23 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/16 10:47:34 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

void	errors(char **arr, int size)
{
	if (!is_integer(size, arr) || big_than_int(size, arr) || is_dup(size, arr) || is_void(size, arr))
		errorHandler();
}
