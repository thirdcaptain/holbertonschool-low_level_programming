#include "holberton.h"

/**
 *print_last_digit - print and return last digit.
 *@a: The value to be evaluated.
 *
 *Return: Last digit.
 */
int print_last_digit(int a)
{
	int last = a % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
