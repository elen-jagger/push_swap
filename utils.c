#include "push_swap.h"

int	check_duplicates(s_stack *stack)
{
	printf("~~~~IN check_duplicates\n");
	s_stack	*temp_node;

	while (stack)
	{
		temp_node = stack->next;
		while (temp_node)
		{
			if (stack->value == temp_node->value)
				return (1);
			temp_node = temp_node->next;
		}
		stack = stack->next;
	}
	return (0);
}

void	free_stack(s_stack **stack)
{
	printf("~~~~IN free_stack\n");
	s_stack	*temp_node;

	if (!stack)
		return;
	while (*stack)
	{
		temp_node = (*stack)->next;
		(*stack)->value = 0;
		free(*stack);
		*stack = temp_node;
	}
	
}

int	list_size(s_stack *list)
{
	printf("~~~~IN list_size\n");
	int	size;

	size = 0;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}

int	is_sorted(s_stack *stack)
{
	printf("~~~~IN is_sorted\n");
	int	cur_value;

	cur_value = 0;
	while (stack)
	{
		if (cur_value > stack->value)
			return (0);
		cur_value = stack->value;
		stack = stack->next;
	}
	return (1);
}
