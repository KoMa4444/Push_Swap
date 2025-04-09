/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:28 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/09 17:26:55 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*moving;

	if ((*src)->next)
	{
		moving = *src;
		(*src) = (*src)->next;
		(*src)->prev = NULL;
		moving->next = (*dst);
		if (*dst)
			(*dst)->prev = moving;
		(*dst) = moving;
	}
	else
	{
		(*src)->next = (*dst);
		(*dst)->prev = (*src);
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
