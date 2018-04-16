#include "holberton.h"

/**
 *_isalpha - determines if argument is a letter
 * @c: The value to be evaluated.
 *
 *Return: 1 if c is a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
