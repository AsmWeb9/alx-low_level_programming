#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string giv
 * n as a parameter
 * @str: it is a string
 * Return: NULL if str = NULL or pointer to
 * the duplicated string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
