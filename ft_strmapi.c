#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char)) {
    char *str;
    int i;

    i = 0;
    str = malloc(ft_strlen(s) + 1);
    while(s[i]) {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}