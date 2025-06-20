#include "main.h"
/**
 * main - entry point
 * Description: print_alphabet - print lowercase alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter = letter + 1;
	}
	_putchar('\n');
}
