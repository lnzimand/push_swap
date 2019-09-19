#ifndef __PUSH_SWAP__
# define __PUSH_SWAP__

typedef struct		Node
{
	int				data;
	int				size;
	struct Node		*next;
}					t_stack;

t_stack	*alloc(void);
void	errors(char **arr, int size);
void	lstdel(t_stack *lst);
void	prep_stack(char **arr, t_stack **stack, int count);
void	display(t_stack *top);
void	pop(t_stack **top);
void	pa(t_stack **top_a, int data);
void	pb(t_stack **top_b, int data);
void	sa(t_stack **top_a);
void	sb(t_stack **top_b);
void	ss(t_stack **top_a, t_stack **top_b);
void	ra(t_stack **top_a);
void	rb(t_stack **top_b);
void	rr(t_stack **top_a, t_stack **top_b);
void	rra(t_stack **top_a);
void	rrb(t_stack **top_b);
void	rrr(t_stack **top_a, t_stack **top_b);
void	three_sort_a(t_stack **top_a);
void	three_sort_b(t_stack **top_b);
int		big_than_int(int ac, char **arr);
int		is_dup(int ac, char **arr);
int		ft_issign(int ch);
int		is_void(int ac, char **arr);
int		is_integer(int ac, char **arr);
int		array_length(char **arr);
int		list_length(t_stack *top);

#endif
