#include <stdlib.h>

void *ft_memset(void *ptr, unsigned int c, size_t n);
char **ft_split(char const *s, char c);
void *ft_calloc(size_t nitems, size_t size);
int	ft_isalnum(char a);
int ft_isalpha(char a);
int	ft_isdigit(char a);
void *ft_memchr(void *str, unsigned int c, size_t n);
int ft_memcmp(const void *p1, const void *p2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_strchr(const char *str, int search_char);
char	*ft_strdup(char *src);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char *ft_strrchr(const char *s, int search_char);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int    ft_toupper(int c);
int    ft_tolower(int c);
void ft_bzero(void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_isascii(int c);
int ft_isprint(int c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
int	ft_atoi(const char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
