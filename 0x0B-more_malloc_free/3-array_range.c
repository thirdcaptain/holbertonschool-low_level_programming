#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start of the array
 * @max: end of the array
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int length;
	int *int_array;
	int i;
	int k = 0;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;
	int_array = malloc(sizeof(int) * length);
	if (int_array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		int_array[k] = i;
		k++;
	}
	return (int_array);
}
