#include <stdlib.h>

/**
 * free_grid - frees a 2-d grid originally created
 * @grid: a pointer to a pointer to an int (a 2-d array)
 * @height: height of the array
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
