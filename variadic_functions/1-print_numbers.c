#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: str printed btwn numbers
 * @n: number of arg
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (n == 0 || separator == 0)
		return;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		/*if spr is not NULL and not AFTER the last number*/
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	va_end(args);

	printf("\n");
}
