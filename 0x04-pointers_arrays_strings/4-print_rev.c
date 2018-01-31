#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: String to be reversed
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{}
	j = i - 1;
	for ( ; s[j]; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
