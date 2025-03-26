/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:00:42 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 20:33:19 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **sta)
{
	t_stack *tmp;
	t_stack *last;

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
	int	len;
	t_bool	sorted;

	sorted = sorted_sta(*sta);
	len = stk_len(*sta);
	if (sorted == true)
		return ;
	else if (len == 2)
		sa(sta);
	else if (len == 3)
		sort_three(sta);
	else
		push_swap(sta, stb);
}

void	find_target_a_to_b(t_stack **src, t_stack *targeted)
{
	// find the target for each node of sta, in stb
	// the target is the closest smaller number in the other stack

}

int	move(t_stack **src, t_stack **dest)
{
	int	moves;
	(void)moves;
	(void)src;
	(void)dest;
	return (0);
}

t_moves	*calculate_moves(t_stack *sta, t_stack *stb)
{
	// return a a t_move where t_move->moves is the amout of operations that it will take for
	// the program to push a number to its target and t_move->id is the value that the number has
	// cause they cant be repeated, each node will have a t_move corresponding to it

	//make another function for actually doing the moves
	(void)sta;
	(void)stb;
	return NULL;
}

void	push_swap(t_stack **sta, t_stack **stb)
{
	// where the algorithm happens, sends and sorts b then it pushes it back to stack a
	while (stk_len(*stb) < 2 && stk_len(*sta) > 3)
		pb(sta, stb);
	(void)sta;
	(void)stb;
}
