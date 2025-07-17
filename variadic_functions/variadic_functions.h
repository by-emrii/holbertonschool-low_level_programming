#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct printer - struct for matching forma type with a func
 * @type: format specifier e.g. 'c', 'i'...
 * @f: func to print correct type
 */
typedef struct printer
{
	char type;
	void (*f)(va_list args);
} printer_t;

/*prototypes for my funcs and _putchar*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
