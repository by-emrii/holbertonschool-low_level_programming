#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabets and a new line
 *
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
