/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzdrodow <mzdrodow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:12:31 by mzdrodow          #+#    #+#             */
/*   Updated: 2025/09/26 17:50:55 by mzdrodow         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

//int main() {
//	char testStr[] = "TesT6";
//
//	printf("%s", ft_strupcase(testStr));
//	return 0;
//}
