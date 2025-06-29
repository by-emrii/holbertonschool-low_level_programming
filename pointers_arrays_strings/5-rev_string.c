#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a char
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0;
	int length;
	char temp;

	while (s[count] != '\0')
	{
		count = count + 1;
	}
	count = count - 1;
	length = count;
	while (count > (length / 2))
	{
		temp = s[count];
		s[count] = s[length - count];
		s[length - count] = temp;

		count = count - 1;
	}
}
