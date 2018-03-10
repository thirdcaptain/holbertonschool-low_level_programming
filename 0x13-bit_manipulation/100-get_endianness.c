#include "holberton.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int one = 1;
	char *c = (char *)&one;

	if (*c)
		return (1);
	else
		return (0);
}
