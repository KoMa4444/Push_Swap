/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkollar <mkollar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:01:04 by mkollar           #+#    #+#             */
/*   Updated: 2025/03/24 20:27:10 by mkollar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*sta;
	t_stack	*stb;

	check_input(argc, argv);
	sta = get_stack(argc, argv);
	ft_no_repeat(&sta);
	stb = NULL;
	sorting_checks(&sta, &stb);
	printf("\nsta\n");
	print_stack(sta);
	free_stack(&sta);
	if (stb)
	{
		printf("\nstb\n");
		print_stack(stb);
		free_stack(&stb);
	}
	return (OK);
}