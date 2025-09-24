void *ft_memmove(void *dest, void *src, unsigned int n) {
    unsigned char *d = dest;
    unsigned char *s = src;

    if (d < s) {
        while (n--)
            *d++ = *s++;
    } else if (d > s) {
        d += n;
        s += n;
        while (n--)
            *--d = *--s;
    }
    return dest;
}
