#include "holberton.h"

/**
 * clear_bit - set value of a bit to 0 at a given index
 * @n: number to manipulate
 * @index: index to change value at
 *
 * Return: 1 if it worked, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_index;
	unsigned int mask;

	max_index = sizeof(unsigned long int) * 8;
	if (index > max_index)
		return (-1);

	mask = 1 << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
