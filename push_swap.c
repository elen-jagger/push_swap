#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		exit(0);
	if (argc == 2)
	{
		ft_parse_str(argv[1]);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
