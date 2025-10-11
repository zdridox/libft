#include "libft.h"

char	*ft_strchr(const char *str, int search_char)
{
	const char	*p;

	p = str;
	while (*p)
	{
		if (*p == (char)search_char)
			return ((char *)p);
		p++;
	}
	if (*p == (char)search_char)
		return ((char *)p);
	return (NULL);
}
