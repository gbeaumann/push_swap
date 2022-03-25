/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:18:41 by gbeauman          #+#    #+#             */
/*   Updated: 2022/03/25 11:46:25 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"./libft/libft.h"
# include	"./printf/ft_printf.h"

typedef struct	s_strct
{
	long long int	*stack_a;
	long long int	*stack_b;
	long long int	*stack_abis;
	long long int	*new_tab;
	int				len_a;
	int				len_b;
	char			**tab;
}				t_strct;

int				main(int argc, char **argv);
void			array_to_int(t_strct *swap);
long long int 	*ft_malloc(long long int len);
void	    	strct_init(t_strct *swap);
int 			check_double(t_strct *swap, int j);
int 			check_alpha(t_strct *swap, int i);
char			**into_array(t_strct *swap, int argc, char **argv);
char			*array_filling(char *str);
int				check_max_min_int(long long value, t_strct *swap);
void			swap_a(t_strct *swap);
void			swap_b(t_strct *swap);
void			push_a(t_strct *swap);
void			push_b(t_strct *swap);
void			rotate_a(t_strct *swap);
void			rotate_b(t_strct *swap);
void			reverse_rotate_a(t_strct *swap);
void			reverse_rotate_b(t_strct *swap);
void			stack_abis_init(t_strct *swap);
void			push_swap(t_strct *swap);
void			swap_ab(t_strct *swap);
int				check_order(t_strct *swap);
void			print_stack_a(t_strct *swap);
void			print_stack_b(t_strct *swap);
void			free_all(t_strct *swap);
void			print_stack_abis(t_strct *swap);
void			ft_sorted_index(t_strct *swap);
void			print_new_tab(t_strct *swap);
void			ft_sort(t_strct *swap);

#endif