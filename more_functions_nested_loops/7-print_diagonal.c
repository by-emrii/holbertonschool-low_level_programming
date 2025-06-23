#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: int value input
 * Return: void
 */
void print_diagonal(int n)
{
	int row = 0;
	int col;

	if (n <= 0)
		_putchar('\n');

	while (row < n)
	{
		col = 0;
		while (col < row)
		{
			_putchar(' ');
			col++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
}
