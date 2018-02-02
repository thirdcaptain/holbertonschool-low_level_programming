#include "holberton.h"

/**
 * reverse_array - reverse the content of an array.
 * @a: Array to be reversed.
 * @n: Number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int tmp = 0;
	int i = 0;
	int len = n - 1;

	for (i = 0; i < len; i++)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;
		len--;
	}
}
