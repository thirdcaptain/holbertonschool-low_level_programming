#include "holberton.h"

/**
 * print_sign - evaluates the sign of a number.
 * @c: The value to be evaluated.
 *
 * Return: 1 if value is positive. 0 if zero. -1 if negative.
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
