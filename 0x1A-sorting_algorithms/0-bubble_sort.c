#include "sort.h"

/**
 * bubble_sort - sorts an array of ints in ascending order
 * @array: array of ints
 * @size: size of list
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int value = 0;
	int bool = 0;
	int last = 0;

	if (size < 2)
		return;

	while (bool == 0)
	{
		bool = 1;
		for (i = 0; i < (size - 1) - last; i++)
		{
			if (array[i] > array[i + 1])
			{
				value = array[i];
				array[i] = array[i + 1];
				array[i + 1] = value;
				bool = 0;
				print_array(array, size);
			}
		}
		last++;
	}
}
