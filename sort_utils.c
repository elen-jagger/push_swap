#include "push_swap.h"

int	get_min(s_stack *stack)
{
	printf("~~~~IN get_min\n");
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
	printf("~~~~IN get_max\n");
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
	printf("~~~~IN get_index\n");
	int	index;
	printf("~~~~IN get_index stack->value = %li, value = %i\n", stack->value, value);

	index = 0;
	while (stack->value != value)
	{
		printf("~~~~IN get_index  index = %i\n", index);
		index++;
		stack = stack->next;
	}
	return (index);
}

int	predict_index_a(s_stack *stack, int value)
{
	printf("~~~~IN predict_index_a\n");
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
	printf("predict_index i = %i\n", index);
	return (index);
}

int	predict_index_b(s_stack *stack, int value)
{
	printf("~~~~IN predict_index_b\n");
	int		index;
	s_stack	*temp_node;

	index = 1;
	//printf("stack->value = %li \n", stack->value);
	printf("value = %i\n", value);
	printf("last_node(stack)->value = %li \n", find_last_node(stack)->value);
	if (stack->value < value && find_last_node(stack)->value > value)
		//index = 0;
		{index = 0;
		printf("~~cond 1~~");}
	else if (get_max(stack) < value || get_min(stack) > value)
		{index = get_index(stack, get_max(stack));
		printf("~~cond 1~~");}
	else
	{
		temp_node = stack->next;
		while (stack->value < value || temp_node->value > value)
		{
		printf("~~cond 3~~");
			index++;
			stack = stack->next;
			temp_node = temp_node->next;
		}
	}
	printf(" i = %i\n", index);
	return (index);
}
