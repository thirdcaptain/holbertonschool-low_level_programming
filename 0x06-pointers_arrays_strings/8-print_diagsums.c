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

	for (i = 0; i < max; i = i + size)
	{
		sum_a += *a;
		a += size + 1;
	}
	for (j = max; j >= 0; j = j - size)
	{
		a -= size - 1;
		sum_b += *a;
	}
	printf("%d, %d\n", sum_a, sum_b);
}
