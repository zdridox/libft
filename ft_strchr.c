/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 01:59:38 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/06 01:59:40 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

char	*ft_strchr(const char *str, int search_char)
{
	const char	*p;

	p = str;
	while (*p)
	{
		if (*p == (char)search_char)
			return ((char *)p);
		p++;
	}
	if (*p == (char)search_char)
		return ((char *)p);
	return (NULL);
}
