#include <stdio.h>
/**
 * main - entry point
 * Des: while loop reversing alphabets
 * Return: Success is 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
