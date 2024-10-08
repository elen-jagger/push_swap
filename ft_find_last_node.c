#include "push_swap.h"

s_stack	*ft_find_last_node(s_stack *last_node)
{
	if (!last_node)
		return (NULL);
	while (last_node->next)
		last_node = last_node->next;
	return (last_node);
}
