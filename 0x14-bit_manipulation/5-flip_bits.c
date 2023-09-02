#include "main.h"

/**
 * flip_bits - Calculate the number of bits to flip between two integers.
 * @n: The first input integer.
 * @m: The second input integer.
 * Return: The number of flipped bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int flipped_bits_count = 0;

	while (xor_value)
	{
	flipped_bits_count += xor_value & 1;
	xor_value >>= 1;
	}

	return flipped_bits_count;
}
