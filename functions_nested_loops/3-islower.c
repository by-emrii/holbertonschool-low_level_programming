#include "main.h"
/**
 * _islower - function to check for lowercase
 * @c: character input to be evaluated
 * Return: void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
