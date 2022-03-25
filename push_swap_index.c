/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:53:18 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/24 16:28:28 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_newtab(t_strct *swap)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < swap->len_a - 1)
    {
        j = i + 1;
        while (j < swap->len_a)
        {
            if (swap->new_tab[i] > swap->new_tab[j])
            {
                tmp = swap->new_tab[i];
                swap->new_tab[i] = swap->new_tab[j];
                swap->new_tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

void ft_sorted_index(t_strct *swap)
{
    int i;
    int j;
    int new_value;

    new_value = 0;
    i = 0;
    ft_sort_newtab(swap);
    while (i < swap->len_a)
    {
        j = 0;
        while (j < swap->len_a)
        {
            if (swap->new_tab[i] == swap->stack_abis[j])
            {
                swap->stack_a[j] = new_value;
                new_value++;
            }
            j++;
        }
        i++;
    }
}