#include <stdlib.h>

void ft_bzero(void *src, unsigned int n);
void *ft_memmove(void *dest, void *src, unsigned int n);
char *ft_strchr(char *str, int search_char);
void *ft_memchr(void *str, unsigned int c, unsigned int n);
char *ft_strrchr(char *str, int search_char);
int ft_memcmp(void * p1, void * p2, size_t size);
int	ft_strlen(char *str);
char **ft_split(char const *s, char c);