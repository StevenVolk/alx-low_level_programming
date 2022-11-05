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
	int w, h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
