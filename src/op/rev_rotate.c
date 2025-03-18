#include "../../inc/push_swap.c"

void	rev_rotate(stack_t **stack)
{

}

void	rra(stack_t *stack_a)
{
	ft_putstr_fd("rra", 1);
	rev_rotate(&stack_a);
}

void	rrb(stack_t *stack_b)
{
	ft_putstr_fd("rrb", 1);
	rev_rotate(&stack_b);
}

void	rrr(stack_t *stack_a, stack_t *stack_b)
{
	ft_putstr_fd("rrr", 1);
	rev_rotate(&stack_a);
	rev_rotate(&stack_b);
}