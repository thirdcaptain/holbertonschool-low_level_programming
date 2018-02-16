#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: type of element
 * @size: amount of elements
 *
 * Return: pointer to allocated memory, NULL otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *pointer;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	return (pointer);
}
