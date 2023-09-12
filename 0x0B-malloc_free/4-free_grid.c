#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: frees a 2 dimensional grid previously created
 * @height: frees a 2 dimensional grid previously created
 *
 * Return: frees a 2 dimensional grid previously created
 */

void free_grid(int **grid, int height)

{
	int a;

	for (a =0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);

}
