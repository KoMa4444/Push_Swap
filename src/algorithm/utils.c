
#include "../../inc/push_swap.h"

void	set_max_min(t_stack **st)
{
	t_stack	*tmp;

	tmp = *st;
	tmp->max = tmp->val;
	tmp->min = tmp->val;
	while (tmp)
	{
		if (tmp->val > (*st)->max)
			(*st)->max = tmp->val;
		if (tmp->val < (*st)->min)
			(*st)->min = tmp->val;
		tmp = tmp->next;
	}
	tmp = *st;
	while (tmp)
	{
		tmp->min = (*st)->min;
		tmp->max = (*st)->max;
		tmp = tmp->next;
	}
}
