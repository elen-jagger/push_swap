#include "push_swap.h"

int	get_min(s_stack *stack)
{
	int	min;

	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	get_max(s_stack *stack)
{
	int	max;

	max = stack->value;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

int	get_index(s_stack *stack, int value)
{
	int	index;

	index = 0;
	while (stack->value != value)
	{
		index++;
		stack = stack->next;
	}
	return (index);
}

int	predict_index_a(s_stack *stack, int value)
{
	int		index;
	s_stack	*temp_node;

	index = 1;
	if (stack->value > value && find_last_node(stack)->value < value)
		index = 0;
	else if (get_max(stack) < value || get_min(stack) > value)
		index = get_index(stack, get_min(stack));
	else
	{
		temp_node = stack->next;
		while (stack->value > value || temp_node->value < value)
		{
			index++;
			stack = stack->next;
			temp_node = temp_node->next;
		}
	}
	return (index);
}

int	predict_index_b(s_stack *stack, int value)
{
	int		index;
	s_stack	*temp_node;

	index = 1;
	if (stack->value < value && find_last_node(stack)->value > value)
		index = 0;
	else if (get_max(stack) < value || get_min(stack) > value)
		index = get_index(stack, get_max(stack));
	else
	{
		temp_node = stack->next;
		while (stack->value < value || temp_node->value > value)
		{
			index++;
			stack = stack->next;
			temp_node = temp_node->next;
		}
	}
	return (index);
}
