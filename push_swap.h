#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct my_stack
{
	long			value;
	long			index;
	struct my_stack	*next;
	struct my_stack	*prev;
}	s_stack;

s_stack	*parse_str(char *str);
s_stack	*find_last_node(s_stack *last_node);
s_stack	*create_new_node(int arg);
s_stack	*make_stack(int argc, char **argv);
int		check_duplicates(s_stack *stack);
int		validate_atoi(char	*s);
void	push(s_stack **dest_stack, s_stack *node);
void	make_prevs(s_stack **stack);
void	show_error(void);
void	free_stack(s_stack **stack);
void	swap_one_stack(s_stack **stack_start, char stack);
void	swap_two_stacks(s_stack **stack_a, s_stack **stack_b);
void	pa_pb(s_stack **dest_stack, s_stack **src_stack, char stack);
void	rotate_one_stack(s_stack **stack_start, char stack);
void	rotate_two_stacks(s_stack **stack_a, s_stack **stack_b);
void	rev_rotate_one_stack(s_stack **stack_start, char stack);
void	rev_rotate_two_stacks(s_stack **stack_a, s_stack **stack_b);

#endif