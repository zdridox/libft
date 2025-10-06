/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 01:55:44 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/06 01:55:46 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>

void	*ft_memchr(void *str, unsigned int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n-- > 0)
	{
		if (*p++ == (unsigned char)c)
			return ((void *)p - 1);
	}
	return (NULL);
}
