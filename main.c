/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:18:46 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 15:56:47 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

int	main(int argc, char **argv)
{
	t_strct	swap;

	swap.stack_a = NULL;
	swap.stack_abis = NULL;
	swap.stack_b = NULL;
	swap.new_tab = NULL;
	if (argc == 2)
	{
		swap.tab = ft_split(argv[1], ' ');
		array_to_int(&swap);
	}
	if (argc > 2)
	{
		swap.tab = into_array(&swap, argc, argv);
		array_to_int(&swap);
	}
	free_all(&swap);
	return (0);
}
