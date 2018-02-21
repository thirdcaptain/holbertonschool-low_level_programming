#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to call to print
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
