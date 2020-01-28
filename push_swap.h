#ifndef __PUSH_SWAP__
# define __PUSH_SWAP__

typedef struct		Node
{
	int				data;
	int				size;
	struct Node		*next;
}					t_stack;

typedef struct		dist
{
	int				to_top;
	int				to_bottom;
	int				max;
	char			*dir;
}					distance;

distance	get_indexes(t_stack *top);
t_stack		*alloc(void);
t_stack		*stack_bottom(t_stack *top);
void		errors(char **arr, int size);
void		lstdel(t_stack *lst);
void		prep_stack(char **arr, t_stack **stack, int count);
void		display(t_stack *top);
void		pop(t_stack **top);
void		pa_pb(t_stack **top, int data);
void		sa_sb(t_stack **top);
void		ss(t_stack **top_a, t_stack **top_b);
void		ra_rb(t_stack **top);
void		rr(t_stack **top_a, t_stack **top_b);
void		rra_rrb(t_stack **top);
void		rrr(t_stack **top_a, t_stack **top_b);
void		three_sort_a(t_stack **top_a);
void		three_sort_b(t_stack **top_b);
void		two_sort_b(t_stack **top);
void		revert_back(t_stack **top_a, t_stack **top_b, distance lengths);
void		sort_bottom(t_stack **top_a, t_stack **top_b, distance lengths);
void		sort_top(t_stack **top_a, t_stack **top, distance lengths);
void		ex_sort_b(t_stack **top_a, t_stack **top_b, distance lengths);
void		sort_b(t_stack **top_a, t_stack **top_b);
void		ps_push_to_a(t_stack **top_a, t_stack **top_b);
void		ps_push_to_b(t_stack **top_a, t_stack **top_b);
void		ps_sa(t_stack **top_a);
void		ps_sb(t_stack **top_b);
void		ps_ra(t_stack **top_a);
void		ps_rb(t_stack **top_b);
void		ps_rra(t_stack **top_a);
void		ps_ss(t_stack **top_a, t_stack **top_b);
void		ps_rrr(t_stack **top_a, t_stack **top_b);
void		ps_rr(t_stack **top_a, t_stack **top_b);
void		ps_rrb(t_stack **top_b);
void		errorHandler(void);
void		ps_three_sort_b(t_stack **top_b);
void		ps_three_sort_a(t_stack **top_a);
void		onetothree(t_stack **top_a, t_stack **top_b, int num_index);
void		solve(t_stack **top_a, t_stack **top_b, int num_index);
void		ps_two_sort_a(t_stack **top_a);
void		ps_two_sort_b(t_stack **top_b);
void		five_sort(t_stack **top_a, t_stack **top_b);
void		sort_ten(t_stack **top_a, t_stack **top_b);
int			sorted_arr(t_stack **top_a);
int			big_than_int(int ac, char **arr);
int			sorted_b(t_stack *top);
int			biggest_int(t_stack *stack);
int			is_dup(int ac, char **arr);
int			ft_issign(int ch);
int			is_void(int ac, char **arr);
int			is_integer(int ac, char **arr);
int			array_length(char **arr);
int			list_length(t_stack *top);
int			ex_five_sort(t_stack **top_a, t_stack **top_b);
int			ps_push_back_to_a(t_stack **top_a, t_stack **top_b);
int			ten_sort(t_stack **top_a, t_stack **top_b);

#endif
