#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct my_stack
{
	long			value;
	long			index;
	struct my_stack	*next;
	struct my_stack	*prev;
}	s_stack;

void	ft_show_error(void);
s_stack	*ft_parse_str(char *str);

#endif