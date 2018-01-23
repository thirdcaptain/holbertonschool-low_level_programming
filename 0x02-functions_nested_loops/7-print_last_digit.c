#include "holberton.h"

/**
 * print_last_digit - returns last value of a digit.
 * @a: The value to be evaluated.
 *
 * Return: 0 Always successful.
 */

int print_last_digit(int a)
{
	if (a < 0)
		a = a * (-1);
	a = a % 10;
	a = a + '0';
	_putchar(a);
	a = a - '0';
	return (a);
}
