#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a matrix of ints
 * @a: Matrix to be added
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_a = 0;
	int sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_a += a[((size * i) + i)];
	}
	for (j = 0; j < size; j++)
	{
		sum_b += a[((size * (j + 1)) - (j + 1))];
	}
	printf("%d, %d\n", sum_a, sum_b);
}
