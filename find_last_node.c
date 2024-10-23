#include "push_swap.h"

s_stack	*find_last_node(s_stack *stack)
{
	printf("~~~~IN find_last_node\n");
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
