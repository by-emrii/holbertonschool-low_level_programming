#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2 to copy
 * Return: ptr or null if not
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0;
	unsigned int i = 0, j = 0;
	char *ptr;
	unsigned int copy_length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	copy_length2 = (n >= length2) ? length2 : n;

	ptr = malloc(sizeof(char) * (length1 + copy_length2 + 1));
	if (ptr == NULL)
		return (NULL);

	while (i < length1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < copy_length2)
	{
		ptr[i + j] = s2[j];
		j++;
	}

	ptr[i + j] = '\0';

	return (ptr);
}
