/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koma <koma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:28 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/03 20:55:24 by koma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*new;
	t_stack	*next;

	new = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!new)
		exit_malloc_error();
	new->val = (*src)->val;
	if ((*src)->next)
	{
		next = (*src)->next;
		free((*src));
		(*src) = next;
	}
	else
	{
		free(*src);
		*src = NULL;
	}
	new->next = (*dst);
	(*dst) = new;
	if ((*dst)->next != NULL)
		(*dst)->next->prev = *dst;
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
