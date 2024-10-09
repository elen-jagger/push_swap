NAME = push_swap
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
SRC =	push_swap.c \
		ft_parse_str.c \
		ft_show_error.c \
		ft_validate_atoi.c \
		ft_create_new_node.c \
		ft_find_last_node.c \
		ft_push.c \
		operations.c \

all:
	@make -C libft/
	cc $(SRC) $(FLAGS) $(LIBFT) -o $(NAME)

clean:
	@make -C libft/ clean

fclean:
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
