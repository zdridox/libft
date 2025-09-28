#include <stdlib.h>
#include <stdio.h>

static int Word_count(char const *s, char c) {
	const char *p;
	int word_count;

	p = s;
	word_count = 1;
	while(*p != '\0') {
		if ((char)*p == c)
			word_count++;
		p++;
	}
	return(word_count);
}

static char **array_allocate(char const *s, char c) {
	char **array;
	const char *p;
	int i;
	int index;
	int word_count;

	i = 0;
	index = 0;
	p = s;
	word_count = Word_count(s, c);
	array = malloc((word_count + 1) * sizeof(char *));
	while(*p != '\0') {
		if((char)*p != c)
			i++;
		if(((char)*p == c)) {
			array[index] = malloc(i + 1);
			i = 0;
			index++;
		}
		p++;
	}
	if(word_count == 1 || index == word_count - 1) {
		array[index] = malloc(i + 1);
	}
	return(array);
}

char **ft_split(char const *s, char c) {
	char **array;
	int index;
	int i;
	const char *p;

	p = s;
	index = 0;
	i = 0;
	array = array_allocate(s, c);
	while(*p != '\0') {
		if((char)*p == c) {
			array[index][i] = '\0';
			i = 0;
			index++;
			p++;
		}
		array[index][i] = (char)*p;
		i++;
		p++;
	}
	array[index][i] = '\0';
	array[index + 1] = NULL;
	return(array);
}

/*
int main() {
	const char string[] = "marek wiertarek sral do wanienek";
	char **arr;

	arr = ft_split(string, ' ');

	for(int i = 0; arr[i] != NULL; i++) {
		printf("%s\n", arr[i]);
	}
	return 0;
}
*/