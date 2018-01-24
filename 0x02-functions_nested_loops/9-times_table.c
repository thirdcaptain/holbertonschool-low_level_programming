#include "holberton.h"

/**
 * times_table - print times table to 9.
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
			if (b == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (first == 0)
				{
					_putchar(' ');
					_putchar(second + '0');
					if (b == 9)
						_putchar('\n');
				}
				if (first != 0)
				{
					_putchar(first + '0');
					_putchar(second + '0');
					if (b == 9)
						_putchar('\n');
				}
			}
		}
	}
}
