/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 09:10:14 by lnzimand          #+#    #+#             */
/*   Updated: 2019/09/18 13:55:03 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include "gnl/get_next_line.h"

int		instruct_valid(char *line)
{
	if ((ft_strcmp("sa", line) == 0) || (ft_strcmp("sb", line) == 0) || (ft_strcmp("ss", line) == 0))
		return (1);
	else if ((ft_strcmp("ra", line) == 0) || (ft_strcmp("rb", line) == 0) || (ft_strcmp("rr", line) == 0))
		return (1);
	else if ((ft_strcmp("rra", line) == 0) || (ft_strcmp("rrb", line) == 0) || (ft_strcmp("rrr", line) == 0))
		return (1);
	return (0);
}

int		getline(void)
{
	char	*line;

	while (get_next_line(0, &line) == 1)
	{
		if (!instruct_valid(line))
		{
			ft_putendl_fd("Error", 2);
			exit(1);
		}
	}
	return (1);
}

void	push_swap(t_stack **top_b, int type)
{
	if (type == 4)
		three_sort_a(top_b);
}

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
//		getline();
		prep_stack(arr, &top_a, argc);
		ft_putchar('\n');
		display(top_a);
		ft_putchar('\n');
		push_swap(&top_a, argc);
		display(top_a);
		ft_putchar('\n');
	}
	return (0);
}
