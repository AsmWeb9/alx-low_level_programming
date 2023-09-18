#include "main.h"
/**
 * _puts - THis is a function that prints a string,
 * followed by a new line, to stdout
 * @str: It is a char pointer
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
