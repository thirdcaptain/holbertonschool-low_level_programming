#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees memory from grid function
 * @grid: pointer to grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
