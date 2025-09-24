void *ft_memchr(void *str, unsigned int c, unsigned int n) {
	unsigned char *p;

	p = str;
	while(n-- > 0) {
		if(*p++ == (unsigned char) c)
			return (p - 1);
	}
	return (0);
}