/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:00:42 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 19:51:57 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack **sta)
{
	// sort three numbers
}

void	sorting_checks(t_stack **sta, t_stack **stb)
{
	//check wether the sta is more than 3 numbers 
	//if it is 3 number sort it
	//if it is 2 numbers swap it if needed and return
	//if it is more than 3 numbers sent int to push_swap
}

void	find_target_a_to_b(t_stack *src, t_stack *targeted)
{
	// find the target for each node of sta, in stb
	// the target is the closest smaller number in the other stack
}

int	move(t_stack **src, t_stack **dest)
{
	int	moves;
}

t_moves	calculate_moves(stack)
{
	// return a a t_move where t_move->moves is the amout of operations that it will take for
	// the program to push a number to its target and t_move->id is the value that the number has
	// cause they cant be repeated, each node will have a t_move corresponding to it

	//make another function for actually doing the moves
}

void	push_swap(t_stack **sta, t_stack **stb)
{
	// where the algorithm happens, sends and sorts b then it pushes it back to stack a
}
