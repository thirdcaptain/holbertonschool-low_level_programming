#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 *Return: Void - always successful.
 */

void print_alphabet_x10(void)
{
	int h;
	int i;

	for (h = 0; h < 10; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
