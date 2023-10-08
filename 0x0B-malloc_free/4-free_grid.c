#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 *
 * @grid: is the first parameter
 *
 * @height: is the second parameter
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int n = 0;

	for (; n < height; n++)
		free(grid[n]);
	free(grid);
}
