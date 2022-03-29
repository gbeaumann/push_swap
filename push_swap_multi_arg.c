/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_multi_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:09:27 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 16:20:30 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

char	*array_filling(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i])
		i++;
	res = malloc((i + 1) * sizeof(*res));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**into_array(t_strct *swap, int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	swap->tab = malloc((argc) * sizeof(swap->tab));
	if (!swap->tab)
		return (NULL);
	while (j < (argc))
	{
		swap->tab[i] = array_filling(argv[j]);
		i++;
		j++;
	}
	swap->tab[i] = NULL;
	return (swap->tab);
}
