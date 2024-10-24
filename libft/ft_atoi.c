/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:44:32 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/04 12:35:28 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*s)
{
	int		sign;
	long	result;

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
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (result * sign);
}
