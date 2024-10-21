#include "push_swap.h"

void	print_stack(s_stack *stack)
{
	while (stack)
	{
		printf("(*stack)->value = %li\n", stack->value);
		// if((*stack)->prev)
		// 	printf("(*stack)->prev->value = %li\n", (*stack)->prev->value);
		stack = stack->next;
	}
}

void	make_prevs(s_stack **stack)
{
	s_stack	*first_node;
	s_stack	*temp_node;

	first_node = *stack;
	temp_node = *stack;
	while ((*stack)->next)
	{
		*stack = (*stack)->next;
		(*stack)->prev = temp_node;
		temp_node = *stack;
	}
	*stack = first_node;
}

s_stack	*make_stack(int argc, char **argv)
{
	int	i;
	int	arg;
	s_stack	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		exit(0);
	if (argc == 2)
		stack_a = parse_str(argv[1]);
	else
	{
		i = 1;
		while (i < argc)
		{
			arg = validate_atoi(argv[i]);
			push(&stack_a, create_new_node(arg));
			i++;
		}
	}
	return stack_a;
}

int	main(int argc, char **argv)
{
	s_stack	*stack_a;

	stack_a = make_stack(argc, argv);
	if (!stack_a || check_duplicates(stack_a))
	{
		free_stack(&stack_a);
		show_error();
	}
	make_prevs(&stack_a);
	if (!is_sorted(stack_a))
		sort(&stack_a);
	printf("~~~~~SORTED STACK A~~~~~\n");
	print_stack(stack_a);
	free_stack(&stack_a);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	s_stack	*stack_a;
// 	stack_a = NULL;
// 	if (argc < 2)
// 		exit(0);
// 	if (argc == 2)
// 		stack_a = parse_str(argv[1]);
// 	else
// 	{
// 		stack_a = parse_args(argc, argv);
// 	}
// 	make_prevs(&stack_a);
// 	printf("~~~~~STACK A~~~~~\n");
// 	print_stack(&stack_a);
// 	// printf("~~~~~STACK A~~~~~\n");
// 	// print_stack(&stack_a);
// 	return (0);
// }
