#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to a char
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int beginning;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
		beginning = length / 2;
	else
		beginning = (length + 1) / 2;

	while (beginning < length)
	{
		_putchar(str[beginning]);
		beginning++;
	}
	_putchar('\n');
}
