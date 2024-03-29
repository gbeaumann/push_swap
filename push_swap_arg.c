/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:17:48 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/31 14:13:27 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	array_to_int(t_strct *swap)
{
	int	i;

	i = 0;
	strct_init(swap);
	while (i < swap->len_a)
	{
		check_alpha(swap, i);
		swap->stack_a[i] = ft_atoi(swap->tab[i]);
		check_double(swap, i);
		check_max_min_int(swap->stack_a[i], swap);
		i++;
	}
	stack_abis_init(swap);
	ft_sorted_index(swap);
	if (swap->len_a == 3)
		three_args(swap);
	else if (swap->len_a == 5 || swap->len_a == 4)
		five_args(swap);
	else
		ft_sort(swap);
}
