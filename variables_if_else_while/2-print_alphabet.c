#include <stdio.h>

/**
 * main - entry point
 * Description: using while loop and printing alphabet in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
