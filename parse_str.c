#include "push_swap.h"

s_stack	*parse_str(char *str)
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
		arg = validate_atoi(arr[i]);
		push(&stack_a, create_new_node(arg));
		i++;
	}
	free(arr);
	return (stack_a);
}
