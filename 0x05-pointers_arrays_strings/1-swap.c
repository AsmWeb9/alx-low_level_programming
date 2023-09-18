#include "main.h"
/**
 * swap_int - Takes to int  pointer
 *            and swap there values
 * @a: It is an integer pointer
 * @b: It is an integer pointer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
