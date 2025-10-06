/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 02:02:53 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/06 02:02:58 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
#include <stdlib.h>

//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char	*p;
	char		*b;
	char		*buffer;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_memset(malloc(1), 0, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = s;
	p += start;
	buffer = malloc(len + 1);
	b = buffer;
	while (len > 0)
	{
		*b++ = *p++;
		len--;
	}
	*b = '\0';
	return (buffer);
}

/*
int	main(void) {
	printf("marek_to_lowca_pianek 9 5: %s\n", ft_substr("marek_to_lowca_pianek",
			9, 5));
	return (0);
}
*/