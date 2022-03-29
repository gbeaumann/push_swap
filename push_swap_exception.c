/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:25:37 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 15:54:25 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	three_args(t_strct *swap)
{	
	while (!ft_check_sort_stack_a(swap))
	{
		if (swap->stack_a[0] == 1 && swap->stack_a[1] == 0)
			swap_a(swap);
		else if (swap->stack_a[0] == 2)
			rotate_a(swap);
		else if (swap->stack_a[2] == 0)
			reverse_rotate_a(swap);
		else if (swap->stack_a[0] == 0)
		{
			swap_a(swap);
			rotate_a(swap);
		}
	}
}

void	five_args(t_strct *swap)
{
	while (!ft_check_sort_stack_a(swap))
	{
		while (swap->len_a > 3)
		{
			if (swap->stack_a[0] > 2)
				push_b(swap);
			if (swap->stack_a[0] <= 2 && swap->len_a > 3)
				rotate_a(swap);
		}
		three_args(swap);
		while (swap->len_b > 0)
		{
			if (swap->stack_b[0] > swap->stack_b[1] && swap->len_b >= 2)
				swap_b(swap);
			push_a(swap);
			rotate_a(swap);
		}
	}
}
