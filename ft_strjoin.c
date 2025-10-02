#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2) {
    char *buffer;
    unsigned int i;

    i = 0;
    buffer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    while(*s1) {
        buffer[i] = *s1;
        i++;
        s1++;
    }
    while(*s2) {
        buffer[i] = *s2;
        i++;
        s2++;
    }
    buffer[i] = '\0';
    return (buffer);
}

/*
int main() {
    printf("'marek', ' wiertarek': %s\n", ft_strjoin("marek", " wiertarek"));
    return 0;
}
*/