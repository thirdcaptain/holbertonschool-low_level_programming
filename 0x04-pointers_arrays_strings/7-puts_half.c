#include "holberton.h"

/**
 * puts_half - prints second half of a string
 * @str: String to be partially printed
 */

void puts_half(char *str)
{
	int length;
	int half;
	int start;

	for (length = 0; str[length]; length++)
	{}
	if (length % 2 == 0)
	{
		for (half = length / 2; half < length; half++)
		{
			_putchar(str[half]);
		}
		_putchar('\n');
	}
	else
	{
		half = (length - 1) / 2;
		start = length - half;
		for (; str[start]; start++)
		{
			_putchar(str[start]);
		}
		_putchar('\n');
	}
}
