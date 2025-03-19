#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	stack_t	*sta;
	stack_t	*stb;

	check_input(argc, argv);
	sta = get_stack(argc, argv);
	(void)stb;
	rra(&sta);
	rra(&sta);
	rra(&sta);
	rra(&sta);
	rra(&sta);
	print_stack(sta);
	free_stack(&sta);
	return (0);
}