#include "main.h"

/**
 * free_grid - frees 2d array
 *
 * @grid: multidimensional array of integers
 * @height: height of the grid
 *
 * Return: nothing
 *
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
