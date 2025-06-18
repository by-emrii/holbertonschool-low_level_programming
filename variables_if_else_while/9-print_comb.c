#include <stdio.h>
/**
 * main - entry point
 * Des: help me
 * Return: Success is 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
