/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 21:55:06 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/10/06 02:01:02 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

//#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int main() {
//	char *strr = "test";
//	int i = ft_strlen(strr);
//	if(i == 4) {
//		write(1, "OK", 2);
//	}
//	return (0);
//}
