#include "main.h"
/**
 * _puts - prints a string, followed by new line
 * @str: pointer to a char
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}
