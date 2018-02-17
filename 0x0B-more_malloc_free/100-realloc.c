#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates memory of pointer
 * @ptr: pointer to old memory area
 * @old_size: size of old memory area
 * @new_size: size of new memory area
 *
 * Return: pointer to new memory area
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str_copy;
	unsigned int i;

	str_copy = ptr;
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size < old_size)
	{
		str_copy = malloc(new_size);
		for (i = 0; i < old_size; i++)
			str_copy[i] = *((char *)ptr + i);

		free(ptr);
		return (str_copy);
	}
	if (new_size > old_size)
	{
		str_copy = malloc(new_size);
		for (i = 0; i < old_size; i++)
		{
			str_copy[i] = *((char *)ptr + i);
		}
		free(ptr);
		return (str_copy);
	}
	return (ptr);
}
