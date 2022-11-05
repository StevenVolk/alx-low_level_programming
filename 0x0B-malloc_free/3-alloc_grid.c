#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a grid with intialized to 0
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: returns grid
 */

int **alloc_grid(int width, int height)
{
	int b, w, h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (b = 0; b < width; b++)
	{
		grid[b] = malloc(width * sizeof(int));
		if (grid[b] == NULL)
		{
			while (b > 0)
			{
				free(grid[b]);
				b--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
