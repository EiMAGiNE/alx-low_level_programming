#include "main.h"

/**
 * free_grid - frees 2 dimensional grid previously created
 * @grid: parameter for grid
 * @height: parameter for height
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
