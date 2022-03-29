/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:18:20 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 16:21:37 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "push_swap.h"

void	push_swap(t_strct *swap)
{
	while (swap->len_a > 1)
	{
		if (swap->stack_b[0] < swap->stack_b[1]
			&& swap->stack_a[0] > swap->stack_a[1] && swap->len_b > 1)
			swap_ab(swap);
		else if (swap->stack_a[0] > swap->stack_a[1] && swap->len_a > 1)
		{
			swap_a(swap);
			push_a(swap);
		}
		else if (swap->stack_b[0] < swap->stack_b[1] && swap->len_b > 1)
			swap_b(swap);
		else if (swap->stack_a[0] < swap->stack_a[1])
			push_a(swap);
	}
	while (swap->len_b > 0)
	{
		if (swap->stack_b[0] < swap->stack_b[1] && swap->len_b > 1)
		{
			swap_b(swap);
			push_b(swap);
		}
		else
			push_b(swap);
	}
}
