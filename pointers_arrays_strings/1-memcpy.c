#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: src copy to
 * @src: memory area to be copied
 * @n: size of memory slots
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
