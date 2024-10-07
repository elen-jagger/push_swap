/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleusik <eleusik@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:39:20 by eleusik           #+#    #+#             */
/*   Updated: 2024/03/18 11:47:51 by eleusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_word_count(char const *str, char delim)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str && *str != delim)
		{
			count++;
			while (*str && *str != delim)
				str++;
		}
		else if (*str == delim)
			str++;
	}
	return (count);
}

static int	get_word_length(char const *str, char delim)
{
	int	len;

	len = 0;
	while (*(str + len) && *(str + len) != delim)
		len++;
	return (len);
}

static char	**free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
	return (array);
}

static char	*get_word(char const *s, size_t len)
{
	char	*str;
	char	*str_ptr;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str_ptr = str;
	while (len--)
		*str++ = *s++;
	*str = '\0';
	return (str_ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;
	int		word_length;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = get_word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	len = 0;
	while (len < word_count)
	{
		while (*s && *s == c)
			s++;
		word_length = get_word_length(s, c);
		arr[len] = get_word(s, word_length);
		if (!arr[len++])
			return (free_array(len, arr));
		s += word_length;
	}
	arr[len] = NULL;
	return (arr);
}
