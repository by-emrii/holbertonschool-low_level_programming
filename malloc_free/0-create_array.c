#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes with specific char
 * @size: size of the array
 * @c: character to initialise array with
 * Return: pointer to arr, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
