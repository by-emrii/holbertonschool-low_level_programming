#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: takes a name param
 * @f: function pointer to a func that takes char *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
