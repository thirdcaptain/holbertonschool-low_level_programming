#include "holberton.h"

/**
 * print_square - prints square with size based on argument
 * @size: Argument to determine character size of square
 */

void print_square(int size)
{
	int i;
	int j;

	if (size != 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar('#');
				if (j == size)
					_putchar('\n');
			}
		}
	}
}
