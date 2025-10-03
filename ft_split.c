//#include <stdio.h>
#include <stdlib.h>

static int	word_counter(char const *s, char c)
{
	const char	*p;
	int			word_count;
	int			in_word;

	p = s;
	in_word = 0;
	word_count = 0;
	while (*p != '\0')
	{
		if (*p != c)
			in_word = 1;
		if (*p == c && in_word == 1)
		{
			word_count++;
			in_word = 0;
		}
		p++;
	}
	if (in_word == 1)
		word_count++;
	return (word_count);
}

static char	**array_allocate(char const *s, char c)
{
	char		**array;
	const char	*p;
	int			i;
	int			index;
	int			in_word;

	p = s;
	i = 0;
	index = 0;
	in_word = 0;
	array = malloc((word_counter(s, c) + 1) * sizeof(char *));
	while (*p != '\0')
	{
		if (*p == c && in_word == 1)
		{
			array[index] = malloc(i + 1);
			index++;
			i = 0;
			in_word = 0;
		}
		if (*p != c)
			in_word = 1;
		if (in_word == 1)
			i++;
		p++;
	}
	if (in_word == 1)
	{
		array[index] = malloc(i + 1);
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	int			index;
	int			i;
	int			in_word;
	const char	*p;

	p = s;
	index = 0;
	i = 0;
	in_word = 0;
	array = array_allocate(s, c);
	while (*p != '\0')
	{
		if (*p == c && in_word == 1)
		{
			array[index][i] = '\0';
			index++;
			i = 0;
			in_word = 0;
		}
		if (*p != c)
			in_word = 1;
		if (in_word == 1)
		{
			array[index][i] = *p;
			i++;
		}
		p++;
	}
	if (in_word == 1)
		array[index++][i] = '\0';
	return (array[index] = NULL, array);
}

/*
int	main(void)
{
	const char	string[] = "      marek     wiertarek    zajebal          wiadro firanek     aaaaaa   ";
	const char	string2[] = "      marek     wiertarek    zajebal          wiadro firanek     aaaaaa";
	char		**arr;
	char		**arr2;

	arr = ft_split(string, ' ');
	arr2 = ft_split(string2, ' ');
	printf("string: '%s'\n", string);
	for (int i = 0; arr[i] != NULL; i++)
	{
		printf("%s\n", arr[i]);
	}
	printf("string2: '%s'\n", string2);
	for (int i = 0; arr2[i] != NULL; i++)
	{
		printf("%s\n", arr2[i]);
	}
	return (0);
}
*/