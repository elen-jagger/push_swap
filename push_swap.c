#include "push_swap.h"

void	print_stack(s_stack **stack)
{
	s_stack	*temp_node;

	temp_node = *stack;
	while (*stack)
	{
		printf("%li\n", (*stack)->value);
		*stack = (*stack)->next;
	}
	*stack = temp_node;
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
	{
		stack_a = ft_parse_str(argv[1]);
	}
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
	stack_b = stack_a;
	print_stack(&stack_a);
	printf("~~~~~~~~~~\n");
	//print_stack(&stack_b);
	//printf("~~~~~~~~~~\n");
	//ft_swap_two_stacks(&stack_a, &stack_b);
	ft_swap_one_stack(&stack_a, 'a');
	print_stack(&stack_a);
	printf("~~~~~~~~~~\n");
	print_stack(&stack_b);
	return (arg);
}
