#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned int.
 * @b: Binary input string pointer.
 *
 * Return: The converted unsigned int (Success), 0 (if invalid input).
 */

unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int sum_bin;

	sum_bin = 0;
	if (b == NULL)
	{
	return (sum_bin);
	}

	length = _strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	sum_bin += (b[i] - '0') * power(2, length - i - 1);
	}

	return (sum_bin);
}

/**
 * _strlen - Compute the length of a string.
 * @s: Constant input string.
 *
 * Return: The length of the input string.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}

	return (len);
}

/**
 * power - Compute the exponentiation of a base to an exponent.
 * @base: Input base.
 * @exp: Input exponent.
 *
 * Return: The result of base raised to the power of exp.
 */

int power(int base, int exp)
{
	int i, num_exp;

	num_exp = 1;
	for (i = 0; i < exp; i++)
	{
	num_exp *= base;
	}

	return (num_exp);
}
