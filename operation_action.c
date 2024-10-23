#include "push_swap.h"

int	do_rarb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push)
{
	printf("~~~~IN do_rarb\n");
	if (stack_to_push == 'a')
	{
		while ((*stack_a)->value != cur_value && predict_index_b(*stack_b,cur_value) > 0)
			rotate_two_stacks(stack_a, stack_b);
		while ((*stack_a)->value != cur_value)
			rotate_one_stack(stack_a, 'a');
		while (predict_index_b(*stack_b, cur_value) > 0)
			rotate_one_stack(stack_b, 'b');
		pa_pb(stack_a, stack_b, 'b');
	}
	else
	{
		while ((*stack_b)->value != cur_value && predict_index_a(*stack_a,cur_value) > 0)
			rotate_two_stacks(stack_a, stack_b);
		while ((*stack_b)->value != cur_value)
			rotate_one_stack(stack_b, 'b');
		while (predict_index_a(*stack_b, cur_value) > 0)
			rotate_one_stack(stack_a, 'a');
		pa_pb(stack_b, stack_a, 'a');
	}
	return (-1);
}

int	do_rrarrb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push)
{
	printf("~~~~IN do_rrarrb\n");
	if (stack_to_push == 'a')
	{
		while ((*stack_a)->value != cur_value && predict_index_b(*stack_b,cur_value) > 0)
			rev_rotate_two_stacks(stack_a, stack_b);
		while ((*stack_a)->value != cur_value)
			rev_rotate_one_stack(stack_a, 'a');
		while (predict_index_b(*stack_b, cur_value) > 0)
			rev_rotate_one_stack(stack_b, 'b');
		pa_pb(stack_a, stack_b, 'b');
	}
	else
	{
		while ((*stack_b)->value != cur_value && predict_index_a(*stack_a,cur_value) > 0)
			rev_rotate_two_stacks(stack_a, stack_b);
		while ((*stack_b)->value != cur_value)
			rev_rotate_one_stack(stack_b, 'b');
		while (predict_index_a(*stack_b, cur_value) > 0)
			rev_rotate_one_stack(stack_a, 'a');
		pa_pb(stack_b, stack_a, 'a');
	}
	return (-1);
}

int	do_rarrb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push)
{
	printf("~~~~IN do_rarrb\n");
	if (stack_to_push == 'a')
	{
		while ((*stack_a)->value != cur_value)
			rotate_one_stack(stack_a, 'a');
		while (predict_index_b(*stack_b, cur_value) > 0)
			rev_rotate_one_stack(stack_b, 'b');
		pa_pb(stack_a, stack_b, 'b');
	}
	else
	{
		// !!!
		while ((*stack_b)->value != cur_value)
			rev_rotate_one_stack(stack_b, 'b');
		while (predict_index_a(*stack_a, cur_value) > 0)
			rotate_one_stack(stack_a, 'a');
		pa_pb(stack_b, stack_a, 'a');
	}
	return (-1);
}

int	do_rrarb(s_stack **stack_a, s_stack **stack_b, int cur_value, char stack_to_push)
{
	printf("~~~~IN do_rrarb\n");
	if (stack_to_push == 'a')
	{
		while ((*stack_a)->value != cur_value)
			rev_rotate_one_stack(stack_a, 'a');
		while (predict_index_b(*stack_b, cur_value) > 0)
			rotate_one_stack(stack_b, 'b');
		pa_pb(stack_a, stack_b, 'b');
	}
	else
	{
		// !!!
		while ((*stack_b)->value != cur_value)
			rotate_one_stack(stack_b, 'b');
		while (predict_index_a(*stack_a, cur_value) > 0)
			rev_rotate_one_stack(stack_a, 'a');
		pa_pb(stack_b, stack_a, 'a');
	}
	return (-1);
}
