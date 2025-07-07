#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: void
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1 = 0, length2 = 0;
	unsigned int i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
		return (NULL);

	while (i < length1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < length2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
