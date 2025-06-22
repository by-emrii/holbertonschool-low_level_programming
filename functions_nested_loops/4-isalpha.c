#include "main.h"
/**
 * _isalpha - checks if c is alphabet
 * @c: character input to be evaluated
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
