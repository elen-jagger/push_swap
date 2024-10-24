/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:33:10 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/05 12:33:10 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		j = 0;
		while (big[j] == little[j] && little[j] && j <= len)
		{
			if (!little[j + 1])
				return ((char *)big);
			j++;
		}
		len--;
		big++;
	}
	return (NULL);
}
