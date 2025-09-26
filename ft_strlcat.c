/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:28:23 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/07/09 06:57:29 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = str_length(dest);
	src_len = str_length(src);
	if (dest_len >= size)
		return (src_len + size);
	while ((src[i] != '\0') && (i + dest_len) < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

//int main() {
//	char str1[] = "jabko";
//	char str2[] = "pomarancz_";
//	
//	printf("%d\n%s", ft_strlcat(str2, str1, 16), str2);
//	return 0;
//}
