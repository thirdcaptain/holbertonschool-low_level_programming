#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: The value to be printed from, to 98.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for ( ; n <= 98; n++)
		{
			if (!(n == 98))
				printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for ( ; n >= 98; n--)
		{
			if (!(n == 98))
				printf("%d, ", n);
			if (n == 98)
				printf("%d\n", n);
		}
	}
}
