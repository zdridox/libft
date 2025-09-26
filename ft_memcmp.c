#include <stdlib.h>

int ft_memcmp(void * p1, void * p2, size_t size) {
    unsigned char *b1;
    unsigned char *b2;
    size_t i;

    b1 = p1;
    b2 = p2;
    i = 0;

    while((b1[i] != '\0' && b2[i] != '\0') && i < size) {

        if(b1[i] != b2[i])
            return (b1[i] - b2[i]);
        i++;
    }
    return (0);
}