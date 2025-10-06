/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:40:08 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/06 02:01:57 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

//#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && i + j < len)
		{
			j++;
		}
		if (ft_strlen(to_find) == j)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

// int main()
//{
//	char	str1[] = "test dup zupy";
//	char	str2[] = "dupy";
//
//	printf("%s\n", ft_strstr(str1, str2));
//	return (0);
//}
