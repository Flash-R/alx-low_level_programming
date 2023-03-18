#include <stdlib.h>

/**
 * free_grid - frees the memory previously allocated to a 2D array
 * @grid: the grid pointer
 * @height: height of grid
 * Return: 0;
 */

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
