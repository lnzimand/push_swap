#include "libft/libft.h"
#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_stack *top;

	prep_stack(argv, &top, argc);
	ft_putendl("Before sort");
	display(top);
	sort_b(&top);
	ft_putendl("After sort");
	display(top);
	return (0);
}
