#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes a func given as a param on each elem of an array
 * @array: array of integers
 * @size: size of an array
 * @action: function pointer to a func that takes int
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
