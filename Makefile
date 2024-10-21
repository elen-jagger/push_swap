NAME = push_swap
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
SRC =	push_swap.c \
		parse_str.c \
		show_error.c \
		validate_atoi.c \
		create_new_node.c \
		find_last_node.c \
		push.c \
		operations.c \
		operations_1.c \
		utils.c \
		sort.c \
		operation_cases.c \
		operation_action.c \

all:
	@make -C libft/
	cc $(SRC) $(FLAGS) $(LIBFT) -o $(NAME)

clean:
	@make -C libft/ clean

fclean:
	@make -C libft/ fclean
	rm -f $(NAME)

re: fclean all
