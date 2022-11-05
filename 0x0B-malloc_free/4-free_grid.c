#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the grid
 *
 * @grid: array of 2-dimensional int
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
