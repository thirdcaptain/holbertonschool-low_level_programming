#include "holberton.h"

/**
 * print_line - draws a line with length based on argument
 * @n: Length of line to be drawn
 *
 */

void print_line(int n)
{
	int i;

	if (n == 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
