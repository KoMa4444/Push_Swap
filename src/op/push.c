#include "../../inc/push_swap.h"

void	push(stack_t **src, stack_t **dst)
{
	stack_t	*new;

	new = (stack_t *)ft_calloc(1, sizeof(stack_t));
	if (!new)
		exit_malloc_error();
	new->val = (*src)->val;
	(*src) = (*src)->next;
	free((*src)->prev);
	new->next = (*dst);
	(*dst) = new;
}

void	pa(stack_t **stack_b, stack_t **stack_a)
{
	ft_putstr_fd("pa\n", 1);
	push(stack_b, stack_a);
}

void	pb(stack_t **stack_a, stack_t **stack_b)
{
	ft_putstr_fd("pb\n", 1);
	push(stack_a, stack_b);
}