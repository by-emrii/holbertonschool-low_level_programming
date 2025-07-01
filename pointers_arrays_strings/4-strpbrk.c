#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: str containing bytes to match
 * Return: pointer to first match from accept; NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int acc_i;

	while (s[i] != '\0')
	{
		acc_i = 0;
		while (accept[acc_i] != '\0')
		{
			if (s[i] == accept[acc_i])
			{
				return (&s[i]);
			}
			acc_i++;
		}
		i++;
	}
	return (0);
}
