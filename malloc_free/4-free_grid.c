#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - release a two-dimensional grid
 * @grid: two-dimensional array
 * @height: height of two-dimensional array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
