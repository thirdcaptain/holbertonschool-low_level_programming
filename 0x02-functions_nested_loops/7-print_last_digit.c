#include "holberton.h"

/**
 * print_last_digit - returns last value of a digit.
 * @a: The value to be evaluated.
 *
 * Return: The value of A.
 */

int print_last_digit(int a)
{
	if (a < 0)
		a = a * (-1);
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
