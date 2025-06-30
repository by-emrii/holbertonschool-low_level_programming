#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int beginning = 0;
	int end = n - 1;
	int temp;

	while (beginning < end)
	{
		temp = a[beginning];
		a[beginning] = a[end];
		a[end] = temp;

		beginning++;
		end--;
	}
}
