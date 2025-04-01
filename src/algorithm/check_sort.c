/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:01:19 by mkollar           #+#    #+#             */
/*   Updated: 2025/04/01 18:01:20 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

t_bool	sorted_sta(t_stack *sta)
{
	while (sta->next != NULL)
	{
		sta = sta->next;
		if (sta->val < sta->prev->val)
			return (false);
	}
	return (true);
}

t_bool	sorted_stb(t_stack *stb)
{
	while (stb->next != NULL)
	{
		stb = stb->next;
		if (stb->val > stb->prev->val)
			return (false);
	}
	return (true);
}
