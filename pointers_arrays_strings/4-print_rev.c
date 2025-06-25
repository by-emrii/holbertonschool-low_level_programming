#include "main.h"
/**
 * print_rev - rints a string, in reverse, followed by a new line
 * @s: pointer to char
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i = i - 1;
	}
	_putchar('\n');
}
