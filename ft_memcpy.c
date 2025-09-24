void *ft_memcpy(void *dest, void *src, unsigned int n) {
	unsigned char *d;
	unsigned char *s;

	s = src;
	d = dest;

	while(n-- > 0)
		*d++ = *s++;
	return(dest);
}