#include <stdio.h>
/**
 * main - entry point
 * Des: for loop using putchar
 * Return: Success is 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
	putchar(letter);
	}

	putchar('\n');
	return (0);
}
