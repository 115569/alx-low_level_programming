#include "main.h"

/**
 * clear_bit - Function to clear a bit at a specific index.
 * @n: Pointer to an unsigned long integer.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if successful, -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
	{
	return (-1);
	}

	mask = 1;
	mask = mask << index;
	mask = ~mask;

	*n = *n & mask;

	return (1);
}
