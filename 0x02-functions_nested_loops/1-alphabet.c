#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		if (i == 'z')
			_putchar('\n');
	}
}
