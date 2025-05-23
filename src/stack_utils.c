/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koma <koma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:10 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/03 19:41:53 by koma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	stk_len(t_stack *st)
{
	int	i;

	i = 0;
	while (st)
	{
		st = st->next;
		i++;
	}
	return (i);
}

void	print_stack(t_stack *stack)
{
	t_stack *tmp;

	if (!stack)
		return ;
	tmp = stack;
	while (tmp)
	{
		ft_printf("[*]	%i	My target is = %i\n", tmp->val, tmp->target);
		tmp = tmp->next;
	}
}

void	add_to_stack(t_stack **stack, int val)
{
	t_stack	*tmp;

	if (!(*stack))
	{
		*stack = (t_stack *)ft_calloc(1, sizeof(t_stack));
		if (!(*stack))
			exit_malloc_error();
		(*stack)->val = val;
		(*stack)->next = NULL;
		(*stack)->prev = NULL;
		return ;
	}
	tmp = *stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!(tmp->next))
		exit_malloc_error();
	tmp->next->val = val;
	tmp->next->prev = tmp;
	tmp->next->next = NULL;
}

void	free_stack(t_stack **stack)
{
	t_stack *tmp;
	tmp = *stack;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(tmp->prev);
	}
	free(tmp);
}

t_stack	*get_last(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
