#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - fxn that frees a 2 dimensional grid
 * previously created by your alloc_grid fxn
 * @grid: previous fxn
 * @height: freeable var from grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
