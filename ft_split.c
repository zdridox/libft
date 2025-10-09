/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 01:58:47 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/09 18:12:17 by mzdrodow         ###   ########.fr       */
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
	char		**array;
	const char	*p;
	int			i;
	int			index;
	int			in_word;

	p = s;
	i = 0;
	index = 0;
	in_word = 0;
	array = malloc((word_counter(s, c) + 1) * sizeof(char *));
	while (*p != '\0')
	{
		if (*p == c && in_word == 1)
		{
			array[index] = malloc(i + 1);
			index++;
			i = 0;
			in_word = 0;
		}
		if (*p != c)
			in_word = 1;
		if (in_word == 1)
			i++;
		p++;
	}
	if (in_word == 1)
		array[index] = malloc(i + 1);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	int			index;
	int			i;
	int			in_word;

	index = 0;
	i = 0;
	in_word = 0;
	array = array_allocate(s, c);
	while (*s != '\0')
	{
		if (*s == c && in_word == 1)
		{
			array[index][i] = '\0';
			index++;
			i = 0;
			in_word = 0;
		}
		if (*s != c)
			in_word = 1;
		if (in_word == 1)
		{
			array[index][i] = *s;
			i++;
		}
		s++;
	}
	if (in_word == 1)
		array[index++][i] = '\0';
	return (array[index] = NULL, array);
}
