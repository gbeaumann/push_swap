/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_fonctions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:30:39 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 16:33:35 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	swap_a(t_strct *swap)
{
	long long int	stock;

	if (swap->len_a > 1)
	{
		stock = swap->stack_a[0];
		swap->stack_a[0] = swap->stack_a[1];
		swap->stack_a[1] = stock;
		ft_printf ("%s\n", "sa");
	}
}

void	swap_b(t_strct *swap)
{
	long long int	stock;

	if (swap->len_b > 1)
	{
		stock = swap->stack_b[0];
		swap->stack_b[0] = swap->stack_b[1];
		swap->stack_b[1] = stock;
		ft_printf ("%s\n", "sb");
	}
}

void	swap_ab(t_strct *swap)
{
	long long int	stock;
	long long int	stock2;

	stock = swap->stack_a[0];
	swap->stack_a[0] = swap->stack_a[1];
	swap->stack_a[1] = stock;
	stock2 = swap->stack_b[0];
	swap->stack_b[0] = swap->stack_b[1];
	swap->stack_b[1] = stock2;
	ft_printf ("%s\n", "ss");
}

void	push_b(t_strct *swap)
{
	int	i;

	i = swap->len_b;
	if (swap->len_b > 0)
	{
		while (i > 0)
		{
			swap->stack_b[i] = swap->stack_b[i - 1];
			i--;
		}
	}
	swap->stack_b[i] = 0;
	swap->len_b++;
	swap->stack_b[0] = swap->stack_a[0];
	i = 0;
	while (i < swap->len_a)
	{
		swap->stack_a[i] = swap->stack_a[i + 1];
		i++;
	}
	swap->len_a--;
	ft_printf ("%s\n", "pb");
}

void	push_a(t_strct *swap)
{
	int	i;

	i = swap->len_a;
	if (swap->len_a > 0)
	{
		while (i > 0)
		{
			swap->stack_a[i] = swap->stack_a[i - 1];
			i--;
		}
	}
	swap->len_a++;
	swap->stack_a[0] = swap->stack_b[0];
	i = 0;
	while (i < swap->len_b)
	{
		swap->stack_b[i] = swap->stack_b[i + 1];
		i++;
	}
	swap->len_b--;
	ft_printf ("%s\n", "pa");
}
