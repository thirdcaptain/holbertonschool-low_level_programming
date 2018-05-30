#include "sort.h"

/**
 * partition - sets partition
 * @array: array of integers
 * @lo: index of low section
 * @hi: index of high position
 * @size: size of array
 *
 * Return: index moving forward
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[hi];
	array[hi] = temp;
	if (i + 1 != hi)
		print_array(array, size);
	return (i + 1);
}

/**
 * sort - sort recursive call
 * @array_int: array of integers
 * @low: low index
 * @high: high index
 * @size: size of array
 */

void sort(int *array_int, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array_int, low, high, size);
		sort(array_int, low, p - 1, size);
		sort(array_int, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts array of ints using quick sort
 * @array: array of integers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int low = 0, high = 0;

	high = size - 1;

	sort(array, low, high, size);
}
