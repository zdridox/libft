/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 01:58:47 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/09 22:33:15 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	const char	*p;
	int			word_count;
	int			in_word;

	p = s;
	in_word = 0;
	word_count = 0;
	while (*p != '\0')
	{
		if (*p != c)
			in_word = 1;
		if (*p == c && in_word == 1)
		{
			word_count++;
			in_word = 0;
		}
		p++;
	}
	if (in_word == 1)
		word_count++;
	return (word_count);
}

static char	**array_allocate(char const *s, char c)
{
	char	**array;
	int		index;
	int		i;

	i = -1;
	index = 0;
	array = malloc((word_counter(s, c) + 1) * sizeof(char *));
	while (*s != '\0')
	{
		if (*s == c && i != -1)
		{
			array[index] = malloc(i + 2);
			index++;
			i = -1;
		}
		if (*s != c)
		{
			i++;
		}
		s++;
	}
	if (i != -1)
		array[index] = malloc(i + 2);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		index;
	int		i;

	i = -1;
	index = 0;
	array = array_allocate(s, c);
	while (*s != '\0')
	{
		if (*s == c && i != -1)
		{
			array[index][i + 1] = '\0';
			index++;
			i = -1;
		}
		if (*s != c)
		{
			array[index][i++ + 1] = *s;
		}
		s++;
	}
	if (i != -1)
		array[index++][i + 1] = '\0';
	return (array[index] = NULL, array);
}
