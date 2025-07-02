#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: an array of 8 char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		row++;
		_putchar('\n');
	}
}
