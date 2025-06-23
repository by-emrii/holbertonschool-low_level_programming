#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int row = 0, col;

	while (row < 10)
	{
		col = 0;
		while (col < 15)
		{
			if (col >= 10)
				_putchar((col / 10) + '0');
			_putchar((col % 10) + '0');

			col = col + 1;
		}
		_putchar('\n');
		row = row + 1;
	}
}
