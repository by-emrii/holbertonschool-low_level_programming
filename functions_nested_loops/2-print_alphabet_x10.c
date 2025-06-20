#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints lowercase alphabets x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i = i + 1;
	}
}
