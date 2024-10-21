NAME = push_swap
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
SRC =	create_new_node.c \
		find_last_node.c \
		operation_action.c \
		operation_cases.c \
		operations_1.c \
		operations.c \
		parse_str.c \
		push_swap.c \
		push.c \
		show_error.c \
		sort_utils.c \
		sort.c \
		utils.c \
		validate_atoi.c \

all:
	@make -C libft/
	cc $(SRC) $(FLAGS) $(LIBFT) -o $(NAME)

clean:
	@make -C libft/ clean

fclean:
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
