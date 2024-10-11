#include "push_swap.h"

void	push(s_stack **dest_stack, s_stack *node)
{
	if (!dest_stack)
		return;
	if (!*dest_stack)
		*dest_stack = node;
	else
		(find_last_node(*dest_stack))->next = node;
}

