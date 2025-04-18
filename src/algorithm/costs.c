/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koma <koma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:48:24 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/09 23:43:50 by koma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	least_cost(t_stack **sta, t_stack **stb, int b_i, int b_len)
{
	t_stack *tmp_a;
	t_stack *tmp_b;

	tmp_a = *sta;
	tmp_b = *stb;
	(void)b_len;
	if (tmp_b->ab_med == true)
	{
		tmp_a->q_target = rrb_faster;
		tmp_a->cost += b_i;
/* 		if ((b_i - tmp_a->cost) < tmp_b->cost)
		{
			tmp_a->q_target = rb_faster;
			if (b_i > tmp_a->cost)
				tmp_a->cost = b_i;
		}
		else
		{
			tmp_a->q_target = rrb_faster;
			tmp_a->cost += tmp_b->cost;
		} */
	}
	else
	{
		tmp_a->q_target = rb_faster;
		tmp_a->cost += b_i;
		/* if ((b_len - b_i - tmp_a->cost) < tmp_b->cost)
		{
			tmp_a->q_target = rrb_faster;
			if ((b_len - b_i - tmp_a->cost) > 0)
				tmp_a->cost += b_i - tmp_a->cost;
		}
		else
		{
			tmp_a->q_target = rb_faster;
			tmp_a->cost += tmp_b->cost;
		} */
	}
}

t_bool	ft_above_median(int median, int index)
{
	if (index <= median)
		return false;
	else
		return true;
}

void	ft_median_and_cost(t_stack **st, int median, int index, int len)
{
	t_stack *tmp;

	tmp = *st;
	tmp->ab_med = ft_above_median(median, index);
	if (tmp->ab_med == false)
		tmp->cost = index;
	else
		tmp->cost = len - index;
}

void	add_b_cost(t_stack **sta, t_stack **stb)
{
	t_stack	*tmp_b;
	t_stack	*tmp_a;
	int		len;
	int		i;

	i = 0;
	tmp_a = *sta;
	tmp_b = *stb;
	len = stk_len(tmp_b);
	while (tmp_b->val != tmp_a->target)
	{
		i++;
		tmp_b = tmp_b->next;
	}
	ft_median_and_cost(&tmp_b, len / 2, i, len);
	if (tmp_a->ab_med == tmp_b->ab_med)
	{
		tmp_a->q_target = same;
		if (tmp_a->cost >= tmp_b->cost)
			return ;
		else
			tmp_a->cost = tmp_b->cost;
	}
	else
		least_cost(&tmp_a, &tmp_b, i, len);
}

void	calculate_cost(t_stack **sta, t_stack **stb)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int			cost;
	int			median;
	int			len;

	tmp_a = *sta;
	tmp_b = *stb;
	len = stk_len(*sta);
	cost = 1;
	median = len / 2;
	while (tmp_a)
	{
		ft_median_and_cost(&tmp_a, median, cost, len);
		add_b_cost(&tmp_a, &tmp_b);
		tmp_a = tmp_a->next;
		cost++;
	}
}
