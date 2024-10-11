#include "push_swap.h"

void	ft_swap_one_stack(s_stack **stack_start, char stack)
{
	s_stack	*temp_node;

	if (!*stack_start || !(*stack_start)->next)
		return;
	temp_node = *stack_start;
	*stack_start = (*stack_start)->next;
	temp_node->next = (*stack_start)->next;
	(*stack_start)->next = temp_node;
	if (stack == 'a')
		write(1, "sa\n", 3);
	else if (stack == 'b')
		write(1, "sb\n", 3);
}

void	ft_swap_two_stacks(s_stack **stack_a, s_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return;
	ft_swap_one_stack(stack_a, 'c');
	ft_swap_one_stack(stack_b, 'c');
	write(1, "ss\n", 3);
}

void	ft_pa_pb(s_stack **src_stack, s_stack **dest_stack, char stack)
{
	s_stack	*temp_node;

	if (!*src_stack)
		return;
	temp_node = *dest_stack;
	*dest_stack = *src_stack;
	*src_stack = (*src_stack)->next;
	(*dest_stack)->next = temp_node;
	if (stack == 'a')
		write(1, "pa\n", 3);
	else
		write(1, "pb\n", 3);
}

void	ft_rotate_one_stack(s_stack **stack_start, char stack)
{
	s_stack	*temp_node;

	if (!*stack_start || !(*stack_start)->next)
		return;
	temp_node = *stack_start;
	*stack_start = ft_find_last_node(*stack_start);
	(*stack_start)->next = temp_node;
	*stack_start = temp_node->next;
	temp_node->next = NULL;
	if (stack == 'a')
		write(1, "ra\n", 3);
	else if (stack == 'b')
		write(1, "rb\n", 3);
}

void	ft_rotate_two_stacks(s_stack **stack_a, s_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return;
	ft_rotate_one_stack(stack_a, 'c');
	ft_rotate_one_stack(stack_b, 'c');
	write(1, "rr\n", 3);
}

void	ft_rev_rotate_one_stack(s_stack **stack_start, char stack)
{
	s_stack	*first_node;
	s_stack	*last_node;

	if (!*stack_start || !(*stack_start)->next)
		return;
	first_node = *stack_start;
	last_node = ft_find_last_node(*stack_start);
	*stack_start = last_node;
	last_node->prev->next = NULL;
	(*stack_start)->next = first_node;
	if (stack == 'a')
		write(1, "rra\n", 4);
	else if (stack == 'b')
		write(1, "rrb\n", 4);
}

void	ft_rev_rotate_two_stacks(s_stack **stack_a, s_stack **stack_b)
{
	if (!*stack_a || !(*stack_a)->next || !*stack_b || !(*stack_b)->next)
		return;
	ft_rev_rotate_one_stack(stack_a, 'c');
	ft_rev_rotate_one_stack(stack_b, 'c');
	write(1, "rrr\n", 4);
}
