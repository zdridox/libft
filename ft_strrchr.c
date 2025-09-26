#include <stdlib.h>

char *ft_strrchr(char *str, int search_char) {
	char *p;
    char *g;

	p = str;
    g = NULL;

	while(*p != '\0') {
		if (*p == search_char)
			g = p;
		p++;
	}
    if (g != NULL)
        return (g);
	return (NULL);
}