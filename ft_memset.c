
void *ft_memset(void *ptr, unsigned int c, unsigned int n) {
	unsigned char *p;

	p = ptr;
	while (n--)
		*p++ = (unsigned char) c;
	return (ptr);
}