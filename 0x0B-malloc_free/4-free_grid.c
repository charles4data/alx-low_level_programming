#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees previously created grid,
 * @grid: grid to be freed,
 * @height: height of grid,
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
