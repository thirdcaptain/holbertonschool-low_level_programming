#include "holberton.h"

/**
 * sq_calc - determines square root
 * @i: Number to return if it is square root.
 * @num: Base number to determine square root.
 *
 * Return: i if square root is found, -1 if square root cannot be found.
 */

int sq_calc(int i, int num)
{
	if (i * i == num)
		return (i);
	if (i * i > num)
		return (-1);
	return (sq_calc(i + 1, num));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: Number to determine square root.
 *
 * Return: Square root of a number.
 */

int _sqrt_recursion(int n)
{
	int calc = 0;

	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (sq_calc(calc, n));
}
