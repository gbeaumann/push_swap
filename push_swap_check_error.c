/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check_error.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:17:54 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 16:04:37 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

int	check_double(t_strct *swap, int j)
{
	long long int	i;

	i = 0;
	while (i < j)
	{
		if (swap->stack_a[i] == swap->stack_a[j])
		{
			write (1, "error - double", 14);
			free_all(swap);
			exit (0);
		}
		i++;
	}
	return (1);
}

int	check_alpha(t_strct *swap, int i)
{
	int	j;

	j = 0;
	while (swap->tab[i][j])
	{
		if ((swap->tab[i][j] >= 48 && swap->tab[i][j] <= 57)
		|| swap->tab[i][j] == 45)
			j++;
		else
		{
			ft_printf ("%s\n", "error - not only numbers");
			free_all(swap);
			exit (0);
		}
	}
	return (1);
}

int	check_max_min_int(long long value, t_strct *swap)
{
	if (value > 2147483647)
	{
		ft_printf ("%s\n", "error - number too big");
		free_all(swap);
		exit (0);
	}
	else if (value < -2147483648)
	{
		ft_printf ("%s\n", "error - number too small");
		free_all(swap);
		exit (0);
	}
	return (1);
}

int	check_order(t_strct *swap)
{
	int	i;

	i = 0;
	while (swap->stack_a[i])
	{
		if (swap->stack_a[i] < swap->stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}
