#include "main.h"
/**
 * times_table  - prints timestable
 *
 * Return: void
 */
void times_table(void)
{
	int digit1 = 0;
	int digit2 = 0;
	int result;

	while (digit1 <= 9)
	{
		while (digit2 <= 9)
		{
			result = digit1 * digit2;

			if (digit2 == 0)
				_putchar(digit2 + 48);
			else if (result <= 9)
			{
				_putchar(' ');
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}

			if (digit2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			digit2 = digit2 + 1;
		}
		_putchar('\n');
		digit1 = digit1 + 1;
		digit2 = 0;
	}
}
