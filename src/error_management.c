#include "../inc/push_swap.h"

void	check_arg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while	(i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) != 1 && (argv[i][j] != ' ' && argv[i][j] != '\0'))
			{
				ft_putstr_fd("\033[31mError:\nPlease input only numeric characters\n", 2);
				ft_putstr_fd("\033[31mfollowed by spaces, dont do silly things >:c", 2);
				exit(3);
			}
			j++;
		}
		i++;
	}
}

void	check_input(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr_fd("\033[31mError:\nPlease input something\n", 2);
		exit(1);
	}
	else if (argv[1] == NULL)
	{
		ft_putstr_fd("\033[31mError:\nInput can not be a NULL character\n", 2);
		exit(2);
	}
	else
		check_arg(argc, argv);
}

void	exit_malloc_error(void)
{
	ft_putstr_fd("Error:\nCould not allocate memory correctly\n", 2);
	exit(EXIT_FAILURE);
}