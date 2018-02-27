#include "holberton.h"
#include <unistd.h>

/**
* printf - prints a string with functionality
* @format: the string to print
*
* Return: 0 Always success
*/

int _printf(const char *format, ...)
{
	int i;
	va_list ap;
	char *string;

	va_start(ap, format);

	string = format;
	while (format[i] != '\0')
	{
		_putchar(string[i]);
	}
	va_end(ap);
/*	int len;

	len = _strlen(format);
	printf("len in _printf is %d\n", len);
	write(1, format, len);
	return(len);
*/
}

