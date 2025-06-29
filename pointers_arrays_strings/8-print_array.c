#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to arrays of integers
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int current_index = 0;

	while (current_index < n)
	{
		printf("%d", a[current_index]);

		if (current_index != n - 1)
		{
			printf(", ");
		}
		current_index++;
	}
	printf("\n");
}
