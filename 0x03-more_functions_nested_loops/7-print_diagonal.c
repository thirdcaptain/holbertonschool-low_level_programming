#include "holberton.h"

/**
 *print_diagonal - prints diagonal line of length n
 *@n: The length of the line
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0)
		_putchar('\n');
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (n == 0)
					_putchar('\n');
				else if (j != 0)
				{
					_putchar(' ');
					if (j == i)
					{
						_putchar('\\');
						_putchar('\n');
					}
				}
			}
		}
	}
}
