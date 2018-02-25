#include "variadic_functions.h"

/**
 * print_c - prints characters
 * @argument: argument to print
 */

void print_c(va_list argument)
{
	printf("%c", va_arg(argument, int));
}

/**
 * print_i - prints integers
 * @argument: argument to print
 */

void print_i(va_list argument)
{
	printf("%d", va_arg(argument, int));
}

/**
 * print_f - prints floats
 * @argument: argument to print
 */

void print_f(va_list argument)
{
	printf("%f", va_arg(argument, double));
}

/**
 * print_s - prints strings
 * @argument: argument to print
 */

void print_s(va_list argument)
{
	char *string;

	string = va_arg(argument, char*);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - print all arguments of specified type
 * @format: The format types which can be printed
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int i, j;
	data_type_t data[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s},
	{NULL, NULL}
	};
	char *s = "";
	char *s1 = ", ";

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (data[j].data_type != NULL)
		{
			if (*(data[j].data_type) == format[i])
			{
				printf("%s", s);
				data[j].f(valist);
				s = s1;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
