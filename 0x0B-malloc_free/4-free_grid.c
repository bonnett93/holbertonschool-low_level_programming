#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: previously created grid
 * @height: rows of the grid
 *
 * Return: Integer, NULL on failure.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
