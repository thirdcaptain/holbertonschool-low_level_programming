#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: Array to be printed
 * @n: Number of elements in the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
