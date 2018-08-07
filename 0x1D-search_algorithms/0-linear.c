#include "search_algos.h"

/**
 * linear_search - searches for value in array using linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *cursor;

	if (array == NULL)
		return (-1);

	cursor = array;
	for (i = 0; i < size; i++)
	{
		if (cursor[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
