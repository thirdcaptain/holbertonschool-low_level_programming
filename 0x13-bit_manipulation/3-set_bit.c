#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number to modify
 * @index: index to set bit to 1 at
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_index;
	unsigned int mask;

	max_index = sizeof(unsigned long int) * 8;
	if (index > max_index)
		return (-1);

	mask = 1 << index;
	if (n == NULL)
		return (-1);

	*n = (*n) | mask;
	return (1);
}
