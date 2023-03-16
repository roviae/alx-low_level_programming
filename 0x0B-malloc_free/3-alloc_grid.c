#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - fxn that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return:0
 */
int **alloc_grid(int width, int height)
{
	int **darray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	darray = malloc(sizeof(int) * height);

	if (darray == NULL)
	{
		free(darray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		darray[i] = malloc(sizeof(int) * width);
		if (darray == NULL)
		{
			free(darray);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			darray[i][j] = 0;
		}
	}
	return (darray);
}
