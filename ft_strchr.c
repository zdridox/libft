#include <stdlib.h>

char *ft_strchr(char *str, int search_char) {
	char *p;

	p = str;

	while(*p != '\0') {
		if (*p == search_char)
			return (p);
		p++;
	}
	return (NULL);
}