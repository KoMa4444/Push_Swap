#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	stack_t	*stack_a;
	stack_t	*stack_b;

	check_input(argc, argv);
	stack_a = get_stack(argc, argv);
	(void)stack_b;
	print_stack(stack_a);
	free_stack(&stack_a);
	return (0);
}