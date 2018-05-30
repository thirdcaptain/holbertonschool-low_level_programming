#include "sort.h"

/**
 * selection_sort - sorts a array using selection sort
 * @array: array of ints
 * @size: size of list
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t start = 0;
	size_t low_idx = 0;
	int low = 0;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	while (start < size - 1)
	{
		low = array[start];
		i = 0;
		while ((start + i) < size)
		{
			if (array[i + start] < low)
			{
				low = array[start + i];
				low_idx = start + i;
			}
			i++;
		}
		if (start != low_idx)
		{
			temp = array[start];
			array[start] = array[low_idx];
			array[low_idx] = temp;
			print_array(array, size);
		}
		start++;
	}
}
