#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 but not 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))
			_putchar(i + '0');
		if (i == 9)
			_putchar('\n');
	}
}
