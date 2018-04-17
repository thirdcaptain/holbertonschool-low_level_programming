#include "holberton.h"

/**
 * _islower - evalutes if c is lowercase
 * @c:The value to be evaluated
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
