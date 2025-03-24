/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:19 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 19:04:50 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rotate(t_stack **stack)
{
	add_to_stack(stack, (*stack)->val);
	(*stack) = (*stack)->next;
	free((*stack)->prev);
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

void rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd("rr\n", 1);
	rotate(stack_a);
	rotate(stack_b);
}