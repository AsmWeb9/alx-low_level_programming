#include "main.h"
/**
 * print_rev - It is a function that prints a string,
 * in reverse, followed by a new line.
 * @s: It is a char pointer
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
