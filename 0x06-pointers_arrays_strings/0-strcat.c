#include "main.h"
/**
 * _strcat -  It is  a function that concatenates two strings
 * @dest: is a  string parameter
 * @src: is a string parameter
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);
}
