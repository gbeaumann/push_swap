/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:23:52 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 17:34:04 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

int	ft_check_sort_stack_a(t_strct *swap)
{
	int	i;
	int	j;

	i = 0;
	while (i < swap->len_a - 1)
	{
		j = i + 1;
		if (swap->stack_a[i] < swap->stack_a[j])
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_sort(t_strct *swap)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	size = swap->len_a;
	while (i < size)
	{
		j = 0;
		while (j < size && !ft_check_sort_stack_a(swap))
		{
			if ((swap->stack_a[0] >> i) & 1)
				rotate_a(swap);
			else
				push_b(swap);
			j++;
		}
		i++;
		while (swap->len_b)
			push_a(swap);
	}
}
