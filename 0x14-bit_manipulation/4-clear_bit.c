#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0
 * @n: Pointer to the number where the bit should be cleared
 * @index: The index of the bit to clear (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= ~mask;
	return (1);
}
