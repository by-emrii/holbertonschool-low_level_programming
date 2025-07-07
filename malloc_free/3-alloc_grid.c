#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: num of cols
 * @height: num of rows
 * Return: pointer to 2d array, or null if fail
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate mem for arr of pointers (each pointer will point to a row)*/
	grid = (malloc(sizeof(int *) * height));
	if (grid == NULL)
		return (NULL);/*return null if allocation fails*/

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);

		/*check if allocation failed for this row*/
		if (grid[i] == NULL)
		{
			/* malloc failed: now free prev allocated row to avoid mem leak*/
			j = 0;
			while (j < i)
			{
				free(grid[j]); /* free each prev allocated row*/
				j++;
			}
			free(grid); /* free arr of pointers iteself*/
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
