/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:15 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 19:04:50 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)->val;
	(*stack)->val = (*stack)->next->val;
	(*stack)->next->val = tmp;
}

void	sa(t_stack **stack_a)
{
	ft_putstr_fd("sa\n", 1);
	swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	ft_putstr_fd("sb\n", 1);
	swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd("ss\n", 1);
	swap(stack_a);
	swap(stack_b);
}
