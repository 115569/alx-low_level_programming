#include "main.h"

/**
 * set_bit - Function to set a specific bit at a given index to 1.
 * @n: Pointer to an unsigned long integer.
 * @index: The index of the bit to set.
 *
 * Return: 1 if successful, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(*n) * 8))
	{
	return (-1);
	}

	*n |= (mask << index);

	return (1);
}
