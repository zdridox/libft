/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 02:00:19 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/09 18:12:30 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*buffer;
	unsigned int	i;

	i = 0;
	buffer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (*s1)
	{
		buffer[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		buffer[i] = *s2;
		i++;
		s2++;
	}
	buffer[i] = '\0';
	return (buffer);
}

/*
int	main(void) {
	printf("'marek', ' wiertarek': %s\n", ft_strjoin("marek", " wiertarek"));
	return (0);
}
*/