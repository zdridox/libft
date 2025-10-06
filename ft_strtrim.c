/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 02:02:28 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/06 02:02:30 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

//#include <stdio.h>

static int	check_inset(char const *set, char c)
{
	char const	*p;

	p = set;
	while (*p)
	{
		if (*p == c)
			return (1);
		p++;
	}
	return (0);
}

static int	get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check_inset(set, s1[i]) == 0)
			return (i);
		i++;
	}
	return (0);
}

static int	get_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (check_inset(set, s1[i]) == 0)
			return (i);
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (end == start)
	{
		res = malloc(2);
		res[0] = s1[start];
		res[1] = '\0';
		return (res);
	}
	if (end < start)
		return (ft_strdup(""));
	res = malloc(end - start + 2);
	while (i < (end - start + 1))
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int	main(void) {
	char str[] = "aaaamarekeeeee";
	char set[] = "ae";

	printf("%s\n", ft_strtrim(str, set));
	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
	printf("%s\n", ft_strtrim("abcdba", "acb"));
}
*/