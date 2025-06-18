#include <stdio.h>
/**
 * main - entry point
 * Des: while loop condition
 * Return: Success is 0
 */

int main(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'q' && letters != 'e')
		{
			putchar(letters);
		}
		letters++;
	}
		putchar('\n');
		return (0);
}
