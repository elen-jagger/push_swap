NAME = push_swap
FLAGS = -Wall -Wextra -Werror
LIBFT = Libft/libft.a
SRC =	push_swap.c \
		ft_parse_str.c \
		ft_show_error.c \

all:
	@make -C Libft/
	cc $(SRC) $(FLAGS) $(LIBFT) -o $(NAME)

clean:
	@make -C Libft/ clean

fclean:
	@make -C Libft/ fclean
	rm -f $(NAME)

re: fclean all
