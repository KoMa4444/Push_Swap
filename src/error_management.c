/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koma <koma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:00:48 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/03 21:19:30 by koma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_bool ft_is_sign(char c)
{
	return (c == '+' || c == '-');
}

t_bool	valid_input(char c)
{
	return (ft_isdigit(c) == 1 || (c == ' ' || c == '\0') || ft_is_sign(c) == true || c == ',');
}

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
			if (valid_input(argv[i][j]) == false)
			{
				ft_putstr_fd("\033[31mERROR: Please input only numeric characters ", 2);
				ft_putstr_fd("\033[31mfollowed by spaces, dont do silly things >:c", 2);
				exit(INPUT_ERROR);
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
		ft_putstr_fd("\033[31mERROR:\nPlease input something\n", 2);
		exit(INPUT_ERROR);
	}
	else if (argv[1] == NULL)
	{
		ft_putstr_fd("\033[31mERROR:\nInput can not be a NULL character\n", 2);
		exit(INPUT_ERROR);
	}
	else
		check_arg(argc, argv);
}

void	exit_malloc_error(void)
{
	ft_putstr_fd("ERROR:\nCould not allocate memory correctly\n", 2);
	exit(MALLOC_ERROR);
}
