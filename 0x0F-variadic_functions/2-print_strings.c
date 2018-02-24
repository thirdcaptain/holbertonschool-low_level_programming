#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separtor to print between strings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *string;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char*);
		if (string == NULL)
		{
			printf("(nil)\n");
			return;
		}
		printf("%s", string);
		if (separator != NULL)
		{
		if (i < (n - 1))
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}

