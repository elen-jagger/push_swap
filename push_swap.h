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

void	ft_show_error(void);
s_stack	*ft_parse_str(char *str);
int	ft_validate_atoi(char	*s);
s_stack	*ft_find_last_node(s_stack *last_node);
void	ft_push(s_stack **dest_stack, s_stack *node);
s_stack	*ft_create_new_node(int arg);
void	ft_swap_one_stack(s_stack **stack_start, char stack);
void	ft_swap_two_stacks(s_stack **stack_a, s_stack **stack_b);
void	ft_pa_pb(s_stack **dest_stack, s_stack **src_stack, char stack);

#endif