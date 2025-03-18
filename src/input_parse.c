#include "../inc/push_swap.h"

int	get_number(char *argv, int *counter)
{
	char	*tmp;
	int		val;
	int		i;

	i = 1;
	while (argv[i] && ft_isdigit(argv[i]) == 1)
		i++;
	tmp = ft_substr(argv, 0, i);
	if (!tmp)
		exit_malloc_error();
	val = atoi(tmp);
	free(tmp);
	*counter += i;
	return (val);
}

stack_t	*get_stack(int argc, char **argv)
{
	int		i;
	int		j;
	stack_t	*stack_a;

	stack_a = (stack_t *)ft_calloc(1, sizeof(stack_t));
	if (!stack_a)
		exit_malloc_error();
	i = 1;
	while	(i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 1)
				add_to_stack(&stack_a, get_number((argv[i]) + j, &j));
			else
				j++;
		}
		i++;
	}
	return (stack_a);
}
