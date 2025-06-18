#include <stdio.h>
/**
 * main - entry point
 * Des: help me
 * Return: Success is 0
 */
int main(void)
{
	int first, second;

	for (first = 0; first <= 8; first++)
	{
		for (second = first + 1; second <= 8; second++)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first != 8 || second != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
