#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: first occurrence of the characters matching
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (0);
}
