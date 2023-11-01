#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid != NULL || height != 0)
	{
		for (a = 0; a < height; a++)
		{
			free(grid[a]);
		}
		free(grid);
	}
}
