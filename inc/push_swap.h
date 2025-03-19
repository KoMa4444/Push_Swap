#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include "libft.h"

typedef struct stack_s
{
	int							val;
	int							target;
	int							max;
	int							min;
	struct stack_s	*prev;
	struct stack_s	*next;
}	stack_t;

// input parse
int		get_number(char *argv, int *counter);
stack_t	*get_stack(int argc, char **argv);

// stack utils
void	print_stack(stack_t *stack);
void	add_to_stack(stack_t **stack, int val);
void	free_stack(stack_t **stack);
stack_t	*get_last(stack_t *stack);

// main.c

// operations
// -> Push
void	push(stack_t **src, stack_t **dst);
void	pa(stack_t **stack_b, stack_t **stack_a);
void	pb(stack_t **stack_a, stack_t **stack_b);
// -> Rev_Rotate
void	rev_rotate(stack_t **stack);
void	rra(stack_t **stack_a);
void	rrb(stack_t **stack_b);
void	rrr(stack_t **stack_a, stack_t **stack_b);
// -> Rotate
void	rotate(stack_t **stack);
void	ra(stack_t **stack_a);
void	rb(stack_t **stack_b);
void rr(stack_t **stack_a, stack_t **stack_b);
// -> Swap
void	swap(stack_t **stack);
void	sa(stack_t **stack_a);
void	sb(stack_t **stack_b);
void	ss(stack_t **stack_a, stack_t **stack_b);

// error handle
void	check_arg(int argc, char **argv);
void	check_input(int argc, char **argv);
void	exit_malloc_error(void);

#endif