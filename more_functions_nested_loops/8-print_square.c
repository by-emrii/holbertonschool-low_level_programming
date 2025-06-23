#include "main.h"
/**
 * print_square - prints a square
 * @size: int
 * Return: void
 */
void print_square(int size)
{
	int row = 0;
	int col = 0;

	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			_putchar('#');
			col++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
