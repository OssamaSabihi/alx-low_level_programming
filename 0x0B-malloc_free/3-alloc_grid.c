#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	return (a);
}

