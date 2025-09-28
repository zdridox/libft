void ft_bzero(void *src, unsigned int n) {
	unsigned char *c;

	c = src;
	while(n-- > 0)
		*c++ = '\0';
}