/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:24 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 19:04:50 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rev_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*pre_last;
	t_stack	*new;

	last = *stack;
	while (last->next != NULL)
	{
		pre_last = last;
		last = last->next;
	}
	pre_last->next = NULL;
	new = (t_stack *)ft_calloc(1, sizeof(t_stack));
	new->val = last->val;
	new->prev = NULL;
	free(last);
	last = NULL;
	new->next = *stack;
	new->prev = NULL;
	(*stack)->prev = new;
	*stack = new;
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