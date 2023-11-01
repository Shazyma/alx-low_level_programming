#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Main Enry
 * @width: input
 * @height: input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			while (a >= 0)
				free(grid[a--]);
			free(grid);
			return (NULL);
		}


		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}

	return (grid);
}
