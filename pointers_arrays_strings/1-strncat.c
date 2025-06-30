#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string of char
 * @src: string of char to be appended to dest
 * @n: n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int count = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (count < n && src[count] != '\0')
	{
		dest[dest_length + count] = src[count];
		count++;
	}
	dest[dest_length + count] = '\0';
	return (dest);
}
