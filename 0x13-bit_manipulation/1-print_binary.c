#include "holberton.h"

/**
 * print_binary - print the binary representation of a number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{

	long int size;
	unsigned long int temp;

/*determine size of integer to print, type times number of bits in a byte*/
	size = sizeof(n) * 8;

	 = n;
	while (size >= 0)
	{
		if (n 
	}
/*
	size--;
	while (size >= 0)
	{
		temp = n >> size;
		if (temp <= n)
		{
			if (temp & 1)
			{
				_putchar('1');
				printf("temp: %lu ", temp);
			}
			else
				_putchar('0');
		}
		size--;
	}
*/
}
