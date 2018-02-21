#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to call to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
