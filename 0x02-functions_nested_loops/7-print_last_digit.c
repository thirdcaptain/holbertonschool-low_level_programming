#include "holberton.h"

/**
 *print_last_digit - print and return last digit.
 *@a: The value to be evaluated.
 *
 *Return: Last digit.
 */

int print_last_digit(int a)
{
	int last;

	if (a < 0)
		a = a * (-1);
	last = a % 10;
	_putchar(last + '0');
	return (last);
}
