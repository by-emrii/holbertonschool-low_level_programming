#include <stdio.h>
/**
 * main - entry point
 * Des: while loop prints numbers of base 16
 * Return: Success is 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit++ + '0');
	}

	while (digit < 16)
	{
		putchar(digit++ - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
