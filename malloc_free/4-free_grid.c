#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid previously created by your alloc_grid function
 * @grid: pointer to the 2d grid
 * @height: number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]); /* free each row */

	free(grid); /* then free the array of pointers */
}
