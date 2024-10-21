#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct my_stack
{
	long			value;
	struct my_stack	*next;
	struct my_stack	*prev;
}	s_stack;

int		case_rarb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push);
int		case_rrarrb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push);
int		case_rarrb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push);
int		case_rrarb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push);
int		check_duplicates(s_stack *stack);
int		choose_operation(s_stack *stack_a, s_stack *stack_b, char stack_to_push);
int		do_rarb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push);
int		do_rrarrb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push);
int		do_rarrb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push);
int		do_rrarb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push);
int		get_index(s_stack *stack, int value);
int		get_max(s_stack *stack);
int		get_min(s_stack *stack);
int		is_sorted(s_stack *stack);
int		list_size(s_stack *list);
int		predict_index_a(s_stack *stack, int value);
int		predict_index_b(s_stack *stack, int value);
int		validate_atoi(char	*s);
s_stack	*create_new_node(int arg);
s_stack	*find_last_node(s_stack *stack);
s_stack	*make_stack(int argc, char **stack_argv);
s_stack	*parse_str(char *str);
s_stack	**sort_to_a(s_stack **stack_a, s_stack **stack_b);
s_stack	*sort_to_b(s_stack **stack_a);
void	free_stack(s_stack **stack);
void	make_prevs(s_stack **stack);
void	pa_pb(s_stack **dest_stack, s_stack **src_stack, char stack);
void	push(s_stack **dest_stack, s_stack *node);
void	rev_rotate_one_stack(s_stack **stack_start, char stack);
void	rev_rotate_two_stacks(s_stack **stack_a, s_stack **stack_b);
void	rotate_one_stack(s_stack **stack_start, char stack);
void	rotate_two_stacks(s_stack **stack_a, s_stack **stack_b);
void	show_error(void);
void	sort(s_stack **stack_a);
void	sort_till_3(s_stack **stack_a, s_stack **stack_b);
void	sort_3(s_stack **stack);
void	swap_one_stack(s_stack **stack_start, char stack);
void	swap_two_stacks(s_stack **stack_a, s_stack **stack_b);

#endif