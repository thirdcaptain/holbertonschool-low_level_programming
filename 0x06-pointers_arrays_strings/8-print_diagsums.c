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
	int sum_a = *a;
	int sum_b = 0;
	int max = size * size;
	int *copy = a;

	for (i = 0; i < max; i = i + size)
	{
		sum_a += *a;
		a += size + 1;
	}
	for (j = 0; j < max; j = j + size)
	{
		copy += size - 1;
		sum_b += *copy;
	}
	printf("%d, %d\n", sum_a, sum_b);
}
