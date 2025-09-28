#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
	printf("---ft_bzero\n");
	char string[] = "marek wiertarek";
	printf("%s\n", string);
	ft_bzero(string, strlen(string) + 1);
	printf("%s\n", string);

	printf("---ft_memmove\n");
	char string2[] = "marek";
	printf("%s\n", string2);
	ft_memmove(string2 + 2, string2, 2);
	printf("%s\n", string2);

	printf("---ft_strchr\n");
	char string3[] = "wiertarek";
	printf("%s\n", string3);
	printf("t: %s\n", ft_strchr(string3, 't'));
	printf("x: %s\n", ft_strchr(string3, 'x'));

	printf("---ft_memchr\n");
	char string4[] = "wiertareczka";
	printf("%s\n", string4);
	printf("t: %s\n", (char *)ft_memchr(string4, 't', 6));
	printf("x: %s\n", (char *)ft_memchr(string4, 'x', 6));

	printf("---ft_strrchr\n");
	char string5[] = "mamba";
		printf("%s\n", string5);
	printf("m: %s\n", ft_strrchr(string5, 'm'));
	printf("a: %s\n", ft_strrchr(string5, 'a'));
	printf("x: %s\n", ft_strrchr(string5, 'x'));

	printf("---ft_memcmp\n");
	printf("%d\n", ft_memcmp("abcde", "abcde", 5));
	printf("%d\n", ft_memcmp("abcde", "Abcde", 5));
	printf("%d\n", ft_memcmp("Abcde", "abcde", 5));

	printf("---ft_split\n");
	char string6[] = "pan marek usiadl se na laweczce klasa benc";
	char **split_arr;
	split_arr = ft_split(string6, ' ');
	printf("%s\n", string6);
	for(int i = 0; split_arr[i] != NULL; i++) {
		printf("%s\n", split_arr[i]);
	}
	return 0;
}