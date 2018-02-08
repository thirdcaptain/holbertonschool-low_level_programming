#include "holberton.h"

/**
 * _strlen_recursion - returns string length
 * @s: String to determine length.
 *
 * Return: Int length of string.
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = count + _strlen_recursion(s + 1);
		return (count + 1);
	}
	return (0);
}
