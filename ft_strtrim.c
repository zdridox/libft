#include <stdlib.h>
//#include <stdio.h>

static int check_inset(char const *set, char c) {
	char const *p;

	p = set;
	while(*p) {
		if(*p == c)
			return (1);
		p++;
	}
	return (0);
}

static int get_trimmed_size(char const *s1, char const *set) {
	char const *p;
	int size;

	size = 0;
	p = s1;
	while(*p) {
		if(check_inset(set, *p) == 0)
			size++;
		p++;
	}
	return(size);
}

char *ft_strtrim(char const *s1, char const *set) {
	char *result;
	int i;

	i = 0;
	result = malloc(get_trimmed_size(s1, set) + 1);
	while(*s1) {
		if(check_inset(set, *s1) == 0) {
			result[i] = *s1;
			i++;
		}
		s1++;
	}
	result[i] = '\0';
	return(result);
}

/*
int main() {

	printf("abcd d: %d\n", check_inset("abcd", 'd'));
	printf("abcd x: %d\n", check_inset("abcd", 'x'));
	printf("marek wiertarek, mkr size: %d\n", get_trimmed_size("marek wiertarek", "mkr"));
	printf("ft_strim: marek wiertarek, mkr: %s\n", ft_strtrim("marek wiertarek", "mkr"));

	return 0;
}
*/