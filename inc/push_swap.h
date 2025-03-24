#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include "libft.h"

typedef struct s_stack
{
	int							val;
	int							target;
	int							max;
	int							min;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

typedef struct s_moves
{
	int				id;
	int				moves;
}	t_moves;

typedef enum e_out
{
	OK = 0,
	EMPTY_INPUT,
	INPUT_ERROR, 
	MALLOC_ERROR,
	BAD_INDEX
} t_out;

// algorithm
void	sorting_checks(t_stack **sta, t_stack **stb);

// input parse
int		get_number(char *argv, int *counter);
t_stack	*get_stack(int argc, char **argv);

// stack utils
void	print_stack(t_stack *stack);
void	add_to_stack(t_stack **stack, int val);
void	free_stack(t_stack **stack);
t_stack	*get_last(t_stack *stack);
int		stk_len(t_stack *st);
// main.c

// operations
// -> Push
void	push(t_stack **src, t_stack **dst);
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pb(t_stack **stack_a, t_stack **stack_b);
// -> Rev_Rotate
void	rev_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
// -> Rotate
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void rr(t_stack **stack_a, t_stack **stack_b);
// -> Swap
void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

// error handle
void	check_arg(int argc, char **argv);
void	check_input(int argc, char **argv);
void	exit_malloc_error(void);

#endif