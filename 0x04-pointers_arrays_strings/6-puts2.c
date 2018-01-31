#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
