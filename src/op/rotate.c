/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:19 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/09 17:26:54 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*moving;
	t_stack *last;


	if (!*stack || stk_len(*stack) < 2)
		return ;
	moving = *stack;
	*stack = (*stack)->next;
	moving->next = NULL;
	(*stack)->prev = NULL;
	last = *stack;
	while (last->next)
	{
		last = last->next;
	}
	last->next = moving;
	moving->prev = last;
}

void	ra(t_stack **stack_a)
{
	ft_putstr_fd("ra\n", 1);
	rotate(stack_a);
}

void	rb(t_stack	**stack_b)
{
	ft_putstr_fd("rb\n", 1);
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd("rr\n", 1);
	rotate(stack_a);
	rotate(stack_b);
}
