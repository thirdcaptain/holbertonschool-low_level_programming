#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: String to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
	return;
}
