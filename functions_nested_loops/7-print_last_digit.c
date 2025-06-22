#include "main.h"
/**
 * print_last_digit  - prints the last digit of a number
 * @n: input of integer
 * Return: value of n
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result = (-result);

	_putchar(result + '0');

	return (result);
}
