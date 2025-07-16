#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * 
 * @
 * Return: void
 */

void print_c()
{
}

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	int i = 0;
	int flag = 0;
	char *str;
	int int_val;
	char char_val;
	double float_val;

	va_start(args, format);
	separator = "";

	while (format[i] != '\0')
	{
		if (format[i] == "c" || format[i] == "i" || format[i] == "f" || format[i] == "s")
		{
			printf("%s", separator);
		}
	}
}
