#include "main.h"
/**
 *  _strlen - Takes a char pointer
 *                        and calculat the legth of a string
 * @s: It is a char pointer
 * Return: the legth as an integer
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
