#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size) {
    unsigned char *p;
    size_t i;

    i = 0;
    p = malloc(nitems * size);
    if(!p) {
        return(NULL);
    }

    while(i < nitems * size)
    {
        p[i++] = 0;
    }
    return((void *)p);
}