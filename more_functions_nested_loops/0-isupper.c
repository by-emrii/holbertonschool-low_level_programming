#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: int to be evaluated
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
