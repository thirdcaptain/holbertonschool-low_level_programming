#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct data_type - struct for character type
 *
 * @data_type: the type selector
 * @f: The function associated
 */

typedef struct data_type
{
	char *data_type;
	void (*f)(va_list);
} data_type_t;

void print_c(va_list argument);
void print_i(va_list argument);
void print_f(va_list argument);
void print_s(va_list argument);
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
