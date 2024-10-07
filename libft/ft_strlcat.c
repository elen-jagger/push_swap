/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:56:40 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/18 10:26:55 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;

	if ((!dst || !src) && !size)
		return (0);
	dst_len = 0;
	while (*(dst + dst_len) && dst_len < size)
		dst_len++;
	if (dst_len < size)
		total_len = dst_len + ft_strlen(src);
	else
		return (size + ft_strlen(src));
	while (*src && dst_len < (size - 1))
	{
		*(dst + dst_len) = *src++;
		dst_len++;
	}
	*(dst + dst_len) = '\0';
	return (total_len);
}
