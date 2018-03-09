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

	max_index = sizeof(unsigned long int) * 8;
	if (index > max_index)
		return (-1);

	if (n == NULL)
		return (-1);

	if (*n == 0)
		*n = *n ^ 1;

	*n = *n >> index;
	*n = *n ^ 1;
	*n = *n << index;
	return (1);
}
