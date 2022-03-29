/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:49:09 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 15:59:38 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	print_stack_a(t_strct *swap)
{
	int	i;

	i = 0;
	while (i < swap->len_a)
	{
		ft_printf("%s %d\n", "stack a: ", swap->stack_a[i]);
		i++;
	}
}

void	print_stack_b(t_strct *swap)
{
	int	i;

	i = 0;
	while (i < swap->len_b)
	{
		ft_printf("%s %d\n", "stack b: ", swap->stack_b[i]);
		i++;
	}
}

void	print_stack_abis(t_strct *swap)
{
	int	i;

	i = 0;
	while (i < swap->len_a)
	{
		ft_printf("%s %d\n", "stack abis: ", swap->stack_abis[i]);
		i++;
	}
}

void	print_new_tab(t_strct *swap)
{
	int	i;

	i = 0;
	while (i < swap->len_a)
	{
		ft_printf("%s %d\n", "new_tab: ", swap->new_tab[i]);
		i++;
	}
}
