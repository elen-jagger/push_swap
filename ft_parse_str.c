#include "push_swap.h"

// void	print_stack(s_stack **stack)
// {
// 	while (*stack)
// 	{
// 		printf("%li\n", (*stack)->value);
// 		*stack = (*stack)->next;
// 	}
// }

s_stack	*ft_parse_str(char *str)
{
	s_stack	*stack_a;
	char	**arr;
	int	i;
	int	arg;

	stack_a = NULL;
	i = 0;
	arr = ft_split(str, ' ');
	while (arr[i])
	{
		arg = ft_validate_atoi(arr[i]);
		ft_push(&stack_a, ft_create_new_node(arg));
		i++;
	}
	free(arr);
	//print_stack(&stack_a);
	return (stack_a);
}
