#include "holberton.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{

	unsigned long int mask;

	mask = 1;
	mask = mask << ((sizeof(mask) * 8) - 1);

/*hard code zero*/
	if (n == 0)
	{
		_putchar('0');
		return;
	}
/*set mask to first 1*/
	while (!(mask & n))
	{
		mask = mask >> 1;
	}
/*print 1s and zeros*/
	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}

}
