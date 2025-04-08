
#include "../../inc/push_swap.h"

t_stack	*ft_find_lowest_cost(t_stack *st)
{
	t_stack	*cheapest;

	cheapest = st;
	while (st)
	{
		if (cheapest->cost > st->cost)
			cheapest = st;
		st = st->next;
	}
	return (cheapest);
}

void	ft_move_ab_med(t_stack **sta, t_stack **stb, t_stack *cheap)
{
	if (cheap->q_target == same || cheap->q_target == rrb_faster)
	{
		while ((*sta)->val != cheap->val && (*stb)->val != cheap->target)
			rrr(sta, stb);
		while ((*stb)->val != cheap->target)
			rrb(stb);
		while ((*sta)->val != cheap->val)
			rra(sta);
	}
	else
	{
		while ((*sta)->val != cheap->val)
			rra(sta);
		while ((*stb)->val != cheap->target)
			rb(stb);
	}
}

void	ft_move_be_med(t_stack **sta, t_stack **stb, t_stack *cheap)
{
	if (cheap->q_target == same || cheap->q_target == rb_faster)
	{
		while ((*sta)->val != cheap->val && (*stb)->val != cheap->target)
			rr(sta, stb);
		while ((*stb)->val != cheap->target)
			rb(stb);
		while ((*sta)->val != cheap->val)
			ra(sta);
	}
	else
	{
		while ((*sta)->val != cheap->val)
			ra(sta);
		while ((*stb)->val != cheap->target)
			rrb(stb);
	}
}

void	ft_move_st(t_stack **sta, t_stack **stb)
{
	t_stack	*cheap;

	cheap = ft_find_lowest_cost(*sta);
	if (cheap->ab_med == true)
		ft_move_ab_med(sta, stb, cheap);
	else
		ft_move_be_med(sta, stb, cheap);
	pb(sta, stb);
}
