#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: int value input
 * Return: void
 */
void print_line(int n)
{
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (a < n)
	{
		_putchar('_');
		a = a + 1;
	}
	_putchar('\n');
}
