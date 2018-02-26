#include "holberton.h"

/**
 * _abs - computes absolute value of an integer.
 * @a:The value to be computed
 *
 *Return: Computed absolute value.
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * (-1);
		return (a);
	}
	else
		return (a);
}
