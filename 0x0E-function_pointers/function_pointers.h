#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>

/**
 * struct data_type - struct for character type
 *
 * @type: the type selector
 * @f: The function associated
 */
typedef struct data_type
{
	char *data_type;
	void (*f)(char *string);
} data_type_t;



int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
