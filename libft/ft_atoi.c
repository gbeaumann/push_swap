/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:57:54 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/29 16:26:38 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

long long int	ft_atoi(const char *str)
{
	int				i;
	long long int	resultat;
	int				np;

	i = 0;
	resultat = 0;
	np = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			np = -1;
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * np);
}
