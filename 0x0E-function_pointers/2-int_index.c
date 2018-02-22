#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers to process
 * @size: size of array
 * @cmp: function to process array
 *
 * Return: index of first element which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int value;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		value = cmp(array[i]);
		if (value != 0)
			return (i);
	}
	return (-1);
}
