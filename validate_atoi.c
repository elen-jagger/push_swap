/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:44:32 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/04 12:35:28 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	validate_atoi(char	*s)
{
	int		sign;
	long long int	result;

	sign = 1;
	result = 0;
	while (*s == 32 || (*s > 8 && *s < 14))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		if (!ft_isdigit(*s))
			show_error();
		result = result * 10 + *s - '0';
		s++;
	}
	if (result * sign > INT_MAX || result * sign < INT_MIN)
		show_error();
	return (result * sign);
}
