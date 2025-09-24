#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_bzero(void *src, unsigned int n);
void *ft_memmove(void *dest, void *src, unsigned int n);
char *ft_strchr(char *str, int search_char);
void *ft_memchr(void *str, unsigned int c, unsigned int n);

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
	printf("t: %s\n", ft_memchr(string4, 't', 6));
	printf("x: %s\n", ft_memchr(string4, 'x', 6));
	return 0;
}