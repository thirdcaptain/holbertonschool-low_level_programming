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

	if (min > max)
		return (NULL);

	length = max - min;
	length++;
	int_array = malloc(sizeof(int) * length);
	if (int_array == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		int_array[i] = min;
		min++;
	}
	int_array[i] = '\0';
	return (int_array);
}
