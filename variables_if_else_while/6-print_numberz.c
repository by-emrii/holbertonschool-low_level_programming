#include <stdio.h>
/**
 * main - entry point
 * Des: for loop using putchar
 * Return: Success is 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}
