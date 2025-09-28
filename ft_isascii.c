int    ft_isascii(int c)
{
    /* checking if c is between 0 and decimal 127 */
    if (c >= 0 && c <= 127)
        return (1);
    /* Note that I didn't return c for this one */
    /* why ? if the value of c is 0, this function as to return a non-zero value too, so we can't return c */
    return (0);
}