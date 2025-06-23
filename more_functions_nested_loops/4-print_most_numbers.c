#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: void
 */
void print_most_numbers(void)
{
	int digit = 0;

	while (digit < 10)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar(digit + '0');
		}
		digit = digit + 1;
	}
	_putchar('\n');
}
