# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbeauman <gbeauman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 15:57:24 by gbeauman          #+#    #+#              #
#    Updated: 2022/03/29 16:38:55 by gbeauman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
SRC = 	main.c\
		push_swap_arg.c\
		push_swap_check_error.c\
		push_swap_init.c\
		push_swap_multi_arg.c\
		push_swap_fonctions.c\
		push_swap_fonctions_2.c\
		push_swap_index.c\
		push_swap.c\
		push_swap_print_stacks.c\
		push_swap_radix.c\
		push_swap_exception.c
FLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	make -C printf
	$(CC) $(FLAGS) $(SRC) libft/libft.a printf/libftprintf.a -framework OpenGL -framework AppKit -o $(NAME)

clean:
	make clean -C libft
	make clean -C printf
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
