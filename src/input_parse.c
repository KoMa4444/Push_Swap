/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:00:56 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 19:04:50 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

t_stack	*get_stack(int argc, char **argv)
{
	int		i;
	int		j;
	t_stack	*stack_a;

	stack_a = NULL;
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
