#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copy of src
 * @src: string of char
 * @n: number of string elements
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
