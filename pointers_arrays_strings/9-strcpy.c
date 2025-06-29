#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to dest
 * @src: pointer to src string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
