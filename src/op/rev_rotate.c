/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:24 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/08 17:54:22 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rev_rotate(t_stack **stack)
{

 	t_stack	*last;
	t_stack	*pre_last;

	last = *stack;
	while (last->next != NULL)
	{
		pre_last = last;
		last = last->next;
	}
	pre_last->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}

void	rra(t_stack **stack_a)
{
	ft_putstr_fd("rra\n", 1);
	rev_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	ft_putstr_fd("rrb\n", 1);
	rev_rotate(stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd("rrr\n", 1);
	rev_rotate(stack_a);
	rev_rotate(stack_b);
}
