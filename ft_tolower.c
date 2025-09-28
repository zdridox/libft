/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:12:31 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/09/28 18:42:52 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

//#include <stdio.h>

char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

//int main() {
//	char testStr[] = "TesT6";
//
//	printf("%s", ft_strlowcase(testStr));
//	return 0;
//}
