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
// main.c

// error handle
void	check_arg(int argc, char **argv);
void	check_input(int argc, char **argv);
void	exit_malloc_error(void);

#endif