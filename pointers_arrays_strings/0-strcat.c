#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string of char
 * @src: string of car to be added to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int count = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src[count] != '\0')
	{
		dest[dest_length + count] = src[count];
		count++;
	}
	dest[dest_length + count] = '\0';
	return (dest);
}
