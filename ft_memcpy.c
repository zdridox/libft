#include <stdlib.h>

void *ft_memcpy(void *dst,const void *src, size_t n) {
	unsigned char *d;
	unsigned char *s;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;

    if (dst == (void *)0 && src == (void *)0) {
		return (dst);
	}
	while(n > 0) {
		*d++ = *s++;
		n--;
	}
	return(dst);
}