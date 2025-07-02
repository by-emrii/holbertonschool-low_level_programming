#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to first element
 * @size: num of rows and col
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row = 0;
	int main_diag_sum = 0;
	int sec_diag_sum = 0;

	while (row < size)
	{
		main_diag_sum += a[row * size + row];
		sec_diag_sum += a[row * size + (size - 1 - row)];
		row++;
	}
	printf("%d, %d\n", main_diag_sum, sec_diag_sum);
}
