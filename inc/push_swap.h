#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include "libft.h"

typedef struct stack_s {
	int			val;
	struct stack_s prev;
	struct stack_s next;
}			stack_t;

// main.c


// utils


// operations
void	push(stack_t *src, stack_t *dst);
void	swap(stack_t *stack);
void	rotate(stack_t *stack);
void	r_rotate(stack_t *stack);

// error handle
void	free_stack(stack_t **stack);

#endif