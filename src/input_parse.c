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

long long	get_number(char *argv, int *counter)
{
	char	*tmp;
	long long	val;
	int		i;

	i = 1;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
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

void	ft_no_repeat(t_stack **sta)
{
	t_stack *chk;
	t_stack *tmp;

	chk = *sta;
	while (chk->next != NULL)
	{
		tmp = *sta;
		while (tmp)
		{
			if (tmp->val == chk->val && tmp != chk)
			{
				ft_printf("\033[31mERROR: Please, do not repeat any number ;-;\nRepeated num: %i", tmp->val);
				free_stack(sta);
				exit(REPEATED_NUMBER);
			}
			tmp = tmp->next;
		}
		chk = chk->next;
	}
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
			if (ft_isdigit(argv[i][j]) == 1 || argv[i][j] == '+' || argv[i][j] == '-')
				add_to_stack(&stack_a, get_number((argv[i]) + j, &j));
			else
				j++;
		}
		i++;
	}
	return (stack_a);
}
