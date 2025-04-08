/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:28 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/08 17:53:38 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	if ((*src)->next)
	{
		(*src) = (*src)->next;
		(*src)->prev->next = (*dst);
		(*dst) = (*src)->prev;
		(*src)->prev = NULL;
		if ((*dst)->next)
			(*dst)->next->prev = (*dst);
	}
	else
	{
		(*src)->next = (*dst);
		(*dst) = (*src);
		(*src) = NULL;
	}
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	ft_putstr_fd("pa\n", 1);
	push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd("pb\n", 1);
	push(stack_a, stack_b);
}
