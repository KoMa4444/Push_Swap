#include "../../inc/push_swap.h"

void swap(stack_t **stack)
{
	int	tmp;

	tmp = (*stack)->val;
	stack->val = (*stack)->next->val;
	(*stack)->next->val = tmp;
}

void	sa(stack_t *stack_a)
{
	ft_putstr_fd("sa", 1);
	swap(&stack_a);
}

void	sb(stack_t *stack_b)
{
	ft_putstr_fd("sb", 1);
	swap(&stack_b);
}

void	ss(stack_t *stack_a, stack_t *stack_b)
{
	ft_putstr_fd("ss", 1);
	swap(&stack_a);
	swap(&stack_b);
}
