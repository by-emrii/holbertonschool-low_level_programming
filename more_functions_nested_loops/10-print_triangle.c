#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: int input
 * Return: void
 */
void print_triangle(int size)
{
	int row = 0;
	int col;

	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (col < size - row - 1)
				_putchar(' ');
			else
				_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
