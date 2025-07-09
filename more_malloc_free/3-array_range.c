#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int total;
	int i;

	if (min > max)
		return (NULL);

	total = max - min + 1;
	array = malloc(sizeof(int) * total);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		array[i] = min + i;
	return (array);
}
