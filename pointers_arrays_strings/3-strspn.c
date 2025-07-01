#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string of char
 * @accept: prefix substring
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int acc_i;
	int flag;

	while (s[i] != '\0')
	{
		flag = 0;
		acc_i = 0;
		while (accept[acc_i] != '\0')
		{
			if (s[i] == accept[acc_i])
			{
				flag = 1;
				break; /*break from inner loop if true*/
			}
			acc_i++;
		}

		if (flag == 0)
		{
			break; /*break outer loop if no match*/
		}
		i++;
	}
	return (i);
}
