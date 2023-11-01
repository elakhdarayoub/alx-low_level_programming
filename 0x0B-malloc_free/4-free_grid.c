#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2d grid.
 * @grid: grid of memory.
 * @height: int.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
