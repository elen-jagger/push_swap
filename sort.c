#include "push_swap.h"

void	sort_till_3(s_stack **stack_a, s_stack **stack_b)
{
	int		min_rotate;
	s_stack	*temp_node;

	while (list_size(*stack_a) > 3 && !is_sorted(*stack_a))
	{
		temp_node = *stack_a;
		min_rotate = choose_operation(*stack_a, *stack_b, 'b');
		while (min_rotate >= 0)
		{
			if (min_rotate == case_rarb(*stack_a, *stack_b, temp_node->value, 'b'))
				min_rotate = do_rarb(stack_a, stack_b, temp_node->value, 'b');
			else if (min_rotate == case_rrarrb(*stack_a, *stack_b, temp_node->value, 'b'))
				min_rotate = do_rrarrb(stack_a, stack_b, temp_node->value, 'b');
			else if (min_rotate == case_rarrb(*stack_a, *stack_b, temp_node->value, 'b'))
				min_rotate = do_rarrb(stack_a, stack_b, temp_node->value, 'b');
			else if (min_rotate == case_rrarb(*stack_a, *stack_b, temp_node->value, 'b'))
				min_rotate = do_rrarb(stack_a, stack_b, temp_node->value, 'b');
			else
				temp_node = temp_node->next;
		}
	}
}

void	sort_3(s_stack **stack)
{
	if ((*stack)->value == get_min(*stack))
	{
		rev_rotate_one_stack(stack, 'a');
		swap_one_stack(stack, 'a');
	}
	else if ((*stack)->value == get_max(*stack))
	{
		rotate_one_stack(stack, 'a');
		if (!is_sorted(*stack))
			swap_one_stack(stack, 'a');
	}
	else
	{
		if (get_index(*stack, get_max(*stack)) == 1)
			rev_rotate_one_stack(stack, 'a');
		else
			swap_one_stack(stack, 'a');
	}
}

s_stack	*sort_to_b(s_stack **stack_a)
{
	s_stack	*stack_b;

	stack_b = NULL;
	if (list_size(*stack_a) >3 && !is_sorted(*stack_a))
		pa_pb(&stack_b, stack_a, 'b');
	if (list_size(*stack_a) >3 && !is_sorted(*stack_a))
		pa_pb(&stack_b, stack_a, 'b');
	if (list_size(*stack_a) >3 && !is_sorted(*stack_a))
		sort_till_3(stack_a, &stack_b);
	if (!is_sorted(*stack_a))
		sort_3(stack_a);
	return (stack_b);
}

s_stack	**sort_to_a(s_stack **stack_a, s_stack **stack_b)
{
	int		min_rotate;
	s_stack	*temp_node;

	while (*stack_b)
	{
		temp_node = *stack_b;
		min_rotate = choose_operation(*stack_a, *stack_b, 'a');
		while (min_rotate >= 0)
		{
			if (min_rotate == case_rarb(*stack_a, *stack_b, temp_node->value, 'a'))
				min_rotate = do_rarb(stack_a, stack_b, temp_node->value, 'a');
			else if (min_rotate == case_rrarrb(*stack_a, *stack_b, temp_node->value, 'a'))
				min_rotate = do_rrarrb(stack_a, stack_b, temp_node->value, 'a');
			else if (min_rotate == case_rarrb(*stack_a, *stack_b, temp_node->value, 'a'))
				min_rotate = do_rarrb(stack_a, stack_b, temp_node->value, 'a');
			else if (min_rotate == case_rrarb(*stack_a, *stack_b, temp_node->value, 'a'))
				min_rotate = do_rrarb(stack_a, stack_b, temp_node->value, 'a');
			else
				temp_node = temp_node->next;
		}
	}
	return (stack_a);
}

void	sort(s_stack **stack_a)
{
	int		index_min;
	s_stack	*stack_b;

	stack_b = NULL;
	if (list_size(*stack_a) == 2)
		swap_one_stack(stack_a, 'a');
	else
	{
		stack_b = sort_to_b(stack_a);
		stack_a = sort_to_a(stack_a, &stack_b);
		index_min = get_index(*stack_a, get_min(*stack_a));
		if (index_min < list_size(*stack_a) - index_min)
		{
			while ((*stack_a)->value != get_min(*stack_a))
				rotate_one_stack(stack_a, 'a');
		}
		else
		{
			while ((*stack_a)->value != get_min(*stack_a))
				rev_rotate_one_stack(stack_a, 'a');
		}
	}
}
