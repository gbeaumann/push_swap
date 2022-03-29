/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_fonctions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:34:12 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 16:35:06 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	rotate_a(t_strct *swap)
{
	long long int	stock;
	int				i;

	i = 0;
	stock = swap->stack_a[i];
	while (i < swap->len_a - 1)
	{
		swap->stack_a[i] = swap->stack_a[i + 1];
		i++;
	}
	swap->stack_a[i] = stock;
	ft_printf ("%s\n", "ra");
}

void	rotate_b(t_strct *swap)
{
	long long int	stock;
	int				i;

	i = 0;
	stock = swap->stack_b[i];
	while (i < swap->len_b - 1)
	{
		swap->stack_b[i] = swap->stack_b[i + 1];
		i++;
	}
	swap->stack_b[i] = stock;
	ft_printf ("%s\n", "rb");
}

void	reverse_rotate_a(t_strct *swap)
{
	long long int	stock;
	int				i;

	i = swap->len_a - 1;
	stock = swap->stack_a[i];
	while (i > 0)
	{
		swap->stack_a[i] = swap->stack_a[i - 1];
		i--;
	}
	swap->stack_a[0] = stock;
	ft_printf ("%s\n", "rra");
}

void	reverse_rotate_b(t_strct *swap)
{
	long long int	stock;
	int				i;

	i = swap->len_b - 1;
	stock = swap->stack_b[i];
	while (i > 0)
	{
		swap->stack_b[i] = swap->stack_b[i - 1];
		i--;
	}
	swap->stack_b[0] = stock;
	ft_printf ("%s\n", "rrb");
}
