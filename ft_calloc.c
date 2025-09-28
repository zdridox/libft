#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size) {
    unsigned char *p;
    size_t i;

    i = 0;
    p = malloc(nitems * size);
    while (i < nitems)
    {
        p[i] = 0;
        i++;
    }
    return((void *)p);
}