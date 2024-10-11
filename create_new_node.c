#include "push_swap.h"

s_stack	*create_new_node(int arg)
{
	s_stack	*new_node;

	new_node = malloc(sizeof (s_stack));
	if (!new_node)
		return (NULL);
	new_node->value = arg;
	new_node->next = NULL;
	return (new_node);
}
