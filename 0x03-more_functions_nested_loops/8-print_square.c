#include "holberton.h"

/**
 * print_square - prints square with size based on argument
 * @size: Argument to determine character size of square
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
				if (j == size)
					_putchar('\n');
			}
		}
	}
}
