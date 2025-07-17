#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/* helper functions */
/**
 * print_char - prints char
 * @args: va_list containing the correct arg
 * Return: void
 */

void print_char(va_list args)
{
	char c = (char)va_arg(args, int); /* get next arg as int, cast to char */

	printf("%c", c);
}

/**
 * print_int - prints int
 * @args: va_list containing the correct arg
 * Return: void
 */

void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - prints float
 * @args: va_list containing the correct arg
 * Return: void
 */

void print_float(va_list args)
{
	float f = (float)va_arg(args, double);

	printf("%f", f);
}

/**
 * print_str - prints str
 * @args: va_list containing the correct arg
 * Return: void
 */

void print_str(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - function that prints anything based on format str
 * @format: types of arg passed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args; /* access variable args */
	char *separator = ""; /* start w empty sep, no comma b4 first val*/
	int i = 0, j;

	/* array of structs that matches type chars to print funcs */
	printer_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};

	va_start(args, format); /* init va_list to process args */

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].type)
			{
				printf("%s", separator);
				types[j].f(args); /* call the correct print func */
				separator = ", ";
				break; /* found the correct type, break inner loop */
			}
			j++;
		}
		i++;
	}
	va_end(args); /* clean va_list */
	printf("\n");
}
