/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koma <koma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:00:42 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/02 20:09:05 by koma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **sta)
{
	t_stack	*tmp;
	t_stack	*last;

	last = *sta;
	tmp = *sta;
	while (sorted_sta(tmp) == false)
	{
		last = get_last(tmp);
		if (tmp->val > last->val)
			rra(&tmp);
		else if (tmp->val > tmp->next->val)
			sa(&tmp);
		else
			rra(&tmp);
	}
	*sta = tmp;
}

void	sorting_checks(t_stack **sta, t_stack **stb)
{
	int		len;
	t_bool	sorted;

	sorted = sorted_sta(*sta);
	len = stk_len(*sta);
	if (sorted == true && *stb == NULL)
		return ;
	else if (len == 2)
		sa(sta);
	else if (len == 3)
		sort_three(sta);
	else
		push_swap(sta, stb);
	sorting_checks(sta, stb);
}

void	find_target_a_to_b(t_stack **src, t_stack *targeted)
{
	t_stack	*tmp;
	t_stack	*chk;

	tmp = *src;
	while (tmp)
	{
		chk = targeted;
		tmp->target = chk->min;
		while (chk)
		{
			if (chk->val < tmp->val && chk->val > tmp->target)
				tmp->target = chk->val;
			chk = chk->next;
		}
		if (tmp->val < tmp->target)
			tmp->target = targeted->max;
		tmp = tmp->next;
	}
}

int	move(t_stack **src, t_stack **dest)
{
	int	moves;
	(void)moves;
	(void)src;
	(void)dest;
	return (0);
}

void	push_swap(t_stack **sta, t_stack **stb)
{
	// where the algorithm happens, sends and sorts b then it pushes it back to stack a
	while (stk_len(*stb) < 2 && stk_len(*sta) > 3)
		pb(sta, stb);
	while (stk_len(*sta) > 3)
	{
		set_max_min(stb);
		find_target_a_to_b(sta, *stb);
		calculate_cost(sta, stb);
		ft_move_st(sta, stb);
	}
	while (sorted_stb(*stb) != true)
		rb(stb);
	ft_printf("\nsta\n\n");
	print_stack(*sta);
	ft_printf("\nstb\n\n");
	print_stack(*stb);
	exit(12);
}
