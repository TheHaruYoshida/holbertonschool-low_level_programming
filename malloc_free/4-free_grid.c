#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free the memory of the prev ex.
 *@grid: value
 *@height: value
 *Return: value
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
