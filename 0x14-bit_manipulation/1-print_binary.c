#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int.
 * @n: The number to be printed in binary.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit_set = 0;
	unsigned long int bit_value;
	int bit_position;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
	bit_value = (n >> bit_position) & 1;

	if (bit_value == 1)
	{
	bit_set = 1;
	}

	if (bit_set == 1)
	{
	_putchar(bit_value + '0');
	}
	}

	if (n == 0)
	{
	_putchar('0');
	}
}
