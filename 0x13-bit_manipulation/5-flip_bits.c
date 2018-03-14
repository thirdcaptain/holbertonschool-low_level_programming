#include "holberton.h"

/**
 * flip_bits - returns the number of bits to change to convert to another num
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned int count = 0;

	difference = n ^ m;
	while (difference > 0)
	{
		if (difference & 1)
			count++;

		difference = difference >> 1;
	}
	return (count);
}
