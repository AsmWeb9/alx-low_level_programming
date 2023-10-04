#include "main.h"
/**
 * str_concat - unction that concatenates two strings.
 * @s1: is the first string
 * @s2: the last string to concatenate
 * Return: if NULL is passed, treat it as an empty string
 * or The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	int j = 0, k =0;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	for (; s1[j] != '\0'; j++)
		;
	for (; s2[k] != '\0'; k++)
		;
	size1 = j;
	size2 = k;
	m = malloc((size1 + size2) * sizeof(char) + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
		{
			m[i] = s2[i - size1];
		}
	}
	m[i] = '\0';
	return (m);
}

