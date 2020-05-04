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

void	c_push(t_stack **first, t_stack **last)
{
	pa_pb(first, (*last)->data);
	pop(last);
}

void	checkerErrorHandler(void)
{
	ft_putendl("KO");
	exit(1);
}

void	execution(t_stack **top_a, t_stack **top_b, char *line)
{
	if (!ft_strcmp("sa", line) && list_length(*top_a) > 1)
		sa_sb(top_a);
	else if (!ft_strcmp("sb", line) && list_length(*top_b) > 1)
		sa_sb(top_b);
	else if (!ft_strcmp("ss", line) && list_length(*top_a) > 1 && list_length(*top_b) > 1)
		ss(top_a, top_b);
	else if (!ft_strcmp("pa", line))
		c_push(top_a, top_b);
	else if (!ft_strcmp("pb", line))
		c_push(top_b, top_a);
	else if (!ft_strcmp("ra", line) && list_length(*top_a) > 1)
		ra_rb(top_a);
	else if (!ft_strcmp("rb", line) && list_length(*top_b) > 1)
		ra_rb(top_b);
	else if (!ft_strcmp("rr", line) && list_length(*top_a) > 1 && list_length(*top_b) > 1)
		rr(top_a, top_b);
	else if (!ft_strcmp("rra", line) && list_length(*top_a) > 1)
		rra_rrb(top_a);
	else if (!ft_strcmp("rrb", line) && list_length(*top_b) > 1)
		rra_rrb(top_b);
	else if (!ft_strcmp("rrr", line) && list_length(*top_a) > 1 && list_length(*top_b) > 1)
		rrr(top_a, top_b);
	else
		checkerErrorHandler();
}

int		getline(t_stack **top_a, t_stack **top_b)
{
	char	*line;

	while (get_next_line(0, &line) > 0)
		execution(top_a, top_b, line);
	if (sorted_arr(top_a) && !list_length(*top_b))
		ft_putendl("OK");
	else
		ft_putendl("KO");
	return (1);
}

int		main(int argc, char **argv)
{
	t_stack	*top_a;
	t_stack	*top_b;
	char	**arr;
	char	*temp;

	top_a = NULL;
	top_b = NULL;
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
		getline(&top_a, &top_b);
	}
	return (0);
}
