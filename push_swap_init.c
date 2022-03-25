/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:54:45 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/25 11:44:35 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void    strct_init(t_strct *swap)
{
	int i;
	
	i = 0;
	while (swap->tab[i])
		i++;
  swap->len_a = i;
  swap->len_b = 0;
  swap->stack_a = ft_malloc(i);
  swap->stack_abis = ft_malloc(i);
  swap->stack_b = ft_malloc(i);
  swap->new_tab = ft_malloc(i);
}

void	stack_abis_init(t_strct *swap)
{
  int i;
  
  i = 0;
  while (i < swap->len_a)
  {
    swap->stack_abis[i] = swap->stack_a[i];
	swap->new_tab[i] = swap->stack_a[i];
    i++;
  }
}

void	free_all(t_strct *swap)
{
	free(swap->stack_a);
	free(swap->stack_b);
	free(swap->stack_abis);
	free(swap->new_tab);
}