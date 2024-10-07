/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:09:20 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/06 14:21:04 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t len)
{
	while (len)
	{
		if (*(char *)str == (char)c)
		{
			return ((char *)str);
		}
		str++;
		len--;
	}
	return (NULL);
}
