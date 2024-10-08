#include "push_swap.h"

void	ft_push(s_stack **dest_stack, s_stack *node)
{
	if (!dest_stack)
		return;
	if (!*dest_stack)
		*dest_stack = node;
	else
		(ft_find_last_node(*dest_stack))->next = node;
}
