#include "main.h"
/**
 * _strlen - returns length of string
 * @s: pointer to char
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0; /*loop counter*/

	while (s[length] != '\0') /*loop until we hit null terminator*/
	{
		length = length + 1; /*count each char*/
	}
	return (length);
}
