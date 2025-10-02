#include <stdlib.h>
//#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    const char *p;
    char *b;
    char *buffer;

    p = s;
    p += start;
    buffer = malloc(len + 1);
    b = buffer;

    while (len > 0)
    {
        *b++ = *p++;
        len--;
    }
    *b = '\0';
    return(buffer);
}

/*
int main() {
    printf("marek_to_lowca_pianek 9 5: %s\n", ft_substr("marek_to_lowca_pianek", 9, 5));
    return 0;
}
*/