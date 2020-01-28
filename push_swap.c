/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:10:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/12/11 17:11:21 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	char	**arr;
	char	*temp;

	if (argc > 1)
	{
		if (argc == 2)
		{
			temp = ft_strjoin(argv[0], " ");
			temp = ft_strjoin(temp, argv[1]);
			arr = ft_strsplit(temp, ' ');
		}
		else
			arr = argv;
		argc = array_length(arr);
		errors(arr, argc);
		prep_stack(arr, &top_a, argc);
		if (sorted_arr(&top_a))
			return (0);
		if (argc < 12)
		{
			if (argc == 3)
				ps_two_sort_a(&top_a);
			else if (argc > 3 && argc < 7)
				five_sort(&top_a, &top_b);
			else
				sort_ten(&top_a, &top_b);
		}
	}
	return (0);
}
