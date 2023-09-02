#include "main.h"

/**
 * get_endianness - Function to determine the system's endianness
 *
 * function checks the system's endianness and returns 1 if it's little
 * endian or 0 if it's big endian.
 *
 * Return: 1 for little endian, 0 for big endian
 */

int get_endianness(void)
{
	int a = 1;
	char *endian = (char *)&a;

	if (*endian == 1)
	{
	return (1);
	}

	return (0);
}
