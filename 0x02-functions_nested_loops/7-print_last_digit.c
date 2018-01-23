#include "holberton.h"

/**
 *print_last_digit - print and return last digit.
 *
 *@a: The value to be evaluated.
 *
 *Return: Last digit.
 */

int print_last_digit(int a)
{
	if (a < 0)
		a = a * (-1);
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
