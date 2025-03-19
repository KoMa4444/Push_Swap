#include "../../inc/push_swap.h"

void	rotate(stack_t **stack)
{
	add_to_stack(stack, (*stack)->val);
	(*stack) = (*stack)->next;
	free((*stack)->prev);
}

void	ra(stack_t **stack_a)
{
	ft_putstr_fd("ra\n", 1);
	rotate(stack_a);
}

void	rb(stack_t	**stack_b)
{
	ft_putstr_fd("rb\n", 1);
	rotate(stack_b);
}

void rr(stack_t **stack_a, stack_t **stack_b)
{
	ft_putstr_fd("rr\n", 1);
	rotate(stack_a);
	rotate(stack_b);
}