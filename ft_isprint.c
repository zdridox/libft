
int    ft_isprint(int c)
{
    /* check if c is between decimal 32 and decimal 126 (inclusive) */
    if (c >= 32 && c <= 126)
        return (c); // if we reach this point, c will be a non-zero value.
    return (0);
}