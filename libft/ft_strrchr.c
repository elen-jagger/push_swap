/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:49:30 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/15 15:03:44 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*pointer;

	pointer = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			pointer = (char *)str;
		}
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)pointer);
}
