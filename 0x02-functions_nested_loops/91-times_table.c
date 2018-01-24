#include "holberton.h"
#include <stdio.h>
/**
 *times_table - print 9 times table
 */

void times_table(void)
{
	int a;
	int b;
	int output;
	int first;
	int second;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			output = a * b;
			first = (output / 10) % 10;
			second = output % 10;
			if (!(first == 0))
			{
				if (1)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(first + '0');
					_putchar(second + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(first + '0');
					_putchar(second + '0');
				}
			}
		}
	}
}
