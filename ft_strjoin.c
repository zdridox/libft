#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    char *buffer;
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    buffer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    while(s1[i]) 
        buffer[j++] = s1[i++];

    i = 0;
    while (s2[i])
        buffer[j++] = s2[i++];
    buffer[j] = '\0';
    return (buffer);
}