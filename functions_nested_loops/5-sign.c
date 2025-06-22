#include "main.h"
/**
 * print_sign - prints respective outcome based of if else
 * @n: input to be evaluated
 * Return: 1 if n is more than 0
 * 0 if n == 0
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
