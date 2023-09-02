#include "main.h"

/**
 * get_bit - Retrieves the value of the bit at a given index in a number.
 * @n: The input value.
 * @index: The bit index to retrieve (0-based).
 *
 * Return: value of bit at specified index (Success), or -1 (Error).
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index >= 64)
	{
	return (-1);
	}

	bit = (n >> index) & 1;
	return (bit);
}
