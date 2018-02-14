#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
		return (NULL);
	grid = (int **)malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(width * sizeof(int));
/*	*grid = malloc((sizeof(int) * height) * (sizeof(int) * width));*/
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
