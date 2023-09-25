#include "main.h"
/**
 * _memset - The function fills
 * the first n bytes of the memory
 * area pointed to by s with the
 * constant byte b
 * @s: is a char  pointer
 * @b: is a char
 * @n: number of bytes of the memory area
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
