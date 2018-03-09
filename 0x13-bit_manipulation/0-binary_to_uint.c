#include "holberton.h"

/**
 * _strlen - gets length of a string
 * @s: string
 *
 * Return: length of string
 */

unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * two_exponent - returns power
 * @power: the power to raise base 2
 *
 * Return: result of power operation
 */

unsigned int two_exponent(unsigned int power)
{
	unsigned int result = 1, i;

	for (i = 0; i < power; i++)
	{
		result = result * 2;
	}
	return (result);
}

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: number to convert
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int count = 0, i, j;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	count = _strlen(b);
	j = count - 1;
	for (i = 0; i < count; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += two_exponent(j);
		j--;
	}
	return (sum);
}

