#include "../../inc/push_swap.h"

void	rev_rotate(stack_t **stack)
{
	stack_t	*last;
	stack_t	*new;

	last = *stack;
	while (last->next->val != 0)
		last = last->next;
	new = (stack_t *)ft_calloc(1, sizeof(stack_t));
	new->val = last->val;
	free(last->next);
	last->next = NULL;
	last->val = 0;
	new->next = (*stack);
	(*stack) = new;
}

void	rra(stack_t **stack_a)
{
	ft_putstr_fd("rra\n", 1);
	rev_rotate(stack_a);
}

void	rrb(stack_t **stack_b)
{
	ft_putstr_fd("rrb\n", 1);
	rev_rotate(stack_b);
}

void	rrr(stack_t **stack_a, stack_t **stack_b)
{
	ft_putstr_fd("rrr\n", 1);
	rev_rotate(stack_a);
	rev_rotate(stack_b);
}