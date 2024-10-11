#include "push_swap.h"

void	print_stack(s_stack **stack)
{
	s_stack	*temp_node;

	temp_node = *stack;
	while (*stack)
	{
		printf("(*stack)->value = %li\n", (*stack)->value);
		// if((*stack)->prev)
		// 	printf("(*stack)->prev->value = %li\n", (*stack)->prev->value);
		*stack = (*stack)->next;
	}
	*stack = temp_node;
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

int	main(int argc, char **argv)
{
	int	i;
	int	arg;
	s_stack	*stack_a;
	s_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		exit(0);
	if (argc == 2)
		stack_a = ft_parse_str(argv[1]);
	// if (argc == 3)
	// {
	// 	stack_a = ft_parse_str(argv[1]);
	// 	stack_b = ft_parse_str(argv[2]);
	// }
	else
	{
		i = 1;
		while (i < argc)
		{
			arg = ft_validate_atoi(argv[i]);
			ft_push(&stack_a, ft_create_new_node(arg));
			i++;
		}
	}
	make_prevs(&stack_a);
	make_prevs(&stack_b);
	printf("~~~~~STACK A~~~~~\n");
	print_stack(&stack_a);
	printf("~~~~~STACK B~~~~~\n");
	print_stack(&stack_b);
	ft_swap_two_stacks(&stack_a, &stack_b);
	printf("~~~~~STACK A~~~~~\n");
	print_stack(&stack_a);
	printf("~~~~~STACK B~~~~~\n");
	print_stack(&stack_b);
	return (arg);
}
