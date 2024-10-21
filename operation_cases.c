#include "push_swap.h"


int	choose_operation(s_stack *stack_a, s_stack *stack_b, char stack_to_push)
{
	int		min_rotate;
	s_stack	*temp_node;

	if (stack_to_push == 'b')
		temp_node = stack_a;
	else
		temp_node = stack_b;
	min_rotate = case_rrarrb(stack_a, stack_b, stack_a->value, stack_to_push);
	while (temp_node)
	{
		if (min_rotate > case_rarb(stack_a, stack_b, temp_node->value, stack_to_push))
			min_rotate = case_rarb(stack_a, stack_b, temp_node->value, stack_to_push);
		if (min_rotate > case_rrarrb(stack_a, stack_b, temp_node->value, stack_to_push))
			min_rotate = case_rrarrb(stack_a, stack_b, temp_node->value, stack_to_push);
		if (min_rotate > case_rrarb(stack_a, stack_b, temp_node->value, stack_to_push))
			min_rotate = case_rrarb(stack_a, stack_b, temp_node->value, stack_to_push);
		if (min_rotate > case_rarrb(stack_a, stack_b, temp_node->value, stack_to_push))
			min_rotate = case_rarrb(stack_a, stack_b, temp_node->value, stack_to_push);
		temp_node = temp_node->next;
	}
	return (min_rotate);
}

int	case_rarb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push)
{
	int	min_rotate;

	if (stack_to_push == 'a')
	{
		min_rotate = predict_index_a(stack_a, cur_value);
		if (min_rotate < get_index(stack_b, cur_value))
			min_rotate = get_index(stack_b, cur_value);
	}
	else
	{
		min_rotate = predict_index_b(stack_b, cur_value);
		if (min_rotate < get_index(stack_a, cur_value))
			min_rotate = get_index(stack_a, cur_value);
	}
	return (min_rotate);
}

int	case_rrarrb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push)
{
	int	min_rotate;

	min_rotate = 0;
	if (stack_to_push == 'a')
	{
		if (predict_index_a(stack_a, cur_value))
			min_rotate = list_size(stack_a) - predict_index_a(stack_a, cur_value);
		if ((list_size(stack_b) - get_index(stack_b, cur_value)) > min_rotate && get_index(stack_b, cur_value))
			min_rotate = list_size(stack_b) - get_index(stack_b, cur_value);
	}
	else
	{
		if (predict_index_b(stack_b, cur_value))
			min_rotate = list_size(stack_b) - predict_index_b(stack_b, cur_value);
		if ((list_size(stack_a) - get_index(stack_a, cur_value)) > min_rotate && get_index(stack_a, cur_value))
			min_rotate = list_size(stack_a) - get_index(stack_a, cur_value);
	}
	return (min_rotate);
}

int	case_rarrb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push)
{
	int	min_rotate;

	min_rotate = 0;
	if (stack_to_push == 'a')
	{
		if (get_index(stack_b, cur_value))
			min_rotate = list_size(stack_b) - get_index(stack_b, cur_value);
		min_rotate = predict_index_a(stack_a, cur_value) + min_rotate;
	}
	else
	{
		if (predict_index_b(stack_b, cur_value))
			min_rotate = list_size(stack_b) - predict_index_b(stack_b, cur_value);
		min_rotate = get_index(stack_a, cur_value) + min_rotate;
	}
	return (min_rotate);
}

int	case_rrarb(s_stack *stack_a, s_stack *stack_b, int cur_value, char stack_to_push)
{
	int	min_rotate;

	min_rotate = 0;
	if (stack_to_push == 'a')
	{
		if (predict_index_a(stack_a, cur_value))
			min_rotate = list_size(stack_a) - predict_index_a(stack_a, cur_value);
		min_rotate = get_index(stack_b, cur_value) + min_rotate;
	}
	else
	{
		if (get_index(stack_a, cur_value))
			min_rotate = list_size(stack_a) - get_index(stack_a, cur_value);
		min_rotate = predict_index_b(stack_b, cur_value) + min_rotate;
	}
	return (min_rotate);
}
