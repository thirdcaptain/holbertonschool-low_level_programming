#include "function_pointers.h"

/**
 * array_iterator - executes a function given as an element of an array
 * @array: array to process
 * @size: size of array
 * @action: function to process array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL)
		return;

	if (size == 0)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
