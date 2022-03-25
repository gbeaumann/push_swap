NAME = push_swap
CC = gcc
SRC = 	main.c\
		push_swap_arg.c\
		push_swap_check_error.c\
		push_swap_init.c\
		push_swap_multi_arg.c\
		push_swap_fonctions.c\
		push_swap_index.c\
		push_swap.c\
		print_stacks.c\
		radix.c\
		exception.c
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
