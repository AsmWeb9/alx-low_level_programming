#include "main.h"
/**
 * _memcpy - The _memcpy() function copies
 * n bytes from memory area src
 * to memory area dest
 * @dest: a destination of  memory
 * @src: a source of memory
 * @n: a number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
