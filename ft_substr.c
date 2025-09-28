#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *p;
    char *b;
    char *buffer;

    p = (char *)s + start;
    buffer = malloc(len + 1);
    b = buffer;

    while (len-- > 0)
    {
        *b++ = *p++;
    }
    *b = '\0';
    return(buffer);
}