/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:10 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 19:04:50 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	stk_len(t_stack *st)
{
	int	i;

	if (!st)
		return (-1);
	i = 0;
	while (st->next != NULL)
		i++;
	return (i);
}

void	print_stack(t_stack *stack)
{
	t_stack *tmp;

	if (!stack)
		return ;
	tmp = stack;
	while (tmp->next != NULL)
	{
		ft_printf("%i\n", tmp->val);
		tmp = tmp->next;
	}
	ft_printf("%i\n", tmp->val);
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
	while (tmp->next->val != 0)
		tmp = tmp->next;
	return (tmp);
}
