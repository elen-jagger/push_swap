/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:54:44 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/06 12:34:25 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s_ptr;

	s_ptr = s;
	while (n)
	{
		*(char *)s = (char)c;
		n--;
		s++;
	}
	return (s_ptr);
}
