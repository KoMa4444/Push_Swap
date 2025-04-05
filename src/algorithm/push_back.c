
#include "../../inc/push_swap.h"

void	get_b_targets(t_stack **stb, t_stack **sta)
{
	t_stack	*tmp_b;
	t_stack	*tmp_a;

	tmp_b = *stb;
	tmp_a = *sta;
	tmp_b->target = tmp_a->val;
	while (tmp_a)
	{
		if (tmp_a->val > tmp_b->val && tmp_a->val < tmp_b->target)
			tmp_b->target = tmp_a->val;
		tmp_a = tmp_a->next;
	}
}
void	get_target_to_top(t_stack **stb, t_stack **sta)
{
	while ((*sta)->val != (*stb)->target)
	{
		if ((*stb)->ab_med == true)
			rra(sta);
		else
			ra(sta);
	}
}

t_bool	ft_targ_ab_med(t_stack *stb, t_stack *sta)
{
	int	i;
	int len;

	len = stk_len(sta);
	i = 0;
	while (sta->val != stb->target)
	{
		sta = sta->next;
		i++;
	}
	if (i > len / 2)
		return (true);
	else
		return (false);
}

void	push_back(t_stack **sta, t_stack **stb)
{
	sort_three(sta);
	while (*stb)
	{
		get_b_targets(stb, sta);
		if ((*sta)->val != (*stb)->target)
		{
			(*stb)->ab_med = ft_targ_ab_med(*stb, *sta);
			get_target_to_top(stb, sta);
		}
		pa(stb, sta);
	}
}
