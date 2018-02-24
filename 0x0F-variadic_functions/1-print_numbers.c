#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers, with separators
 * @separator: separator to print between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL)
		{
		if (i < (n - 1))
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
