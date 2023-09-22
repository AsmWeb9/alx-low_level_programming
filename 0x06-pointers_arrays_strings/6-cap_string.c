#include "main.h"
/**
 * cap_string -  a function that capitalizes
 * all words of a string.
 * @str: a string  parameter
 * Return: a string
 */
char *cap_string(char *str)
{
	int capitalize = 1;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n'
				|| *str == ',' || *str == ';' || *str == '.'
				|| *str == '!' || *str == '?' || *str == '"'
				|| *str == '(' || *str == ')' || *str == '{'
				|| *str == '}')
			capitalize = 1;
		else if (capitalize)
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - ('a' - 'A');
			capitalize = 0;
		}
		str++;
	}
	return (str);
}
