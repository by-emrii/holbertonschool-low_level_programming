#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to input string
 * Return: pointer to dup string, NULL if fail
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	/*find length of str first*/
	while (str[length] != '\0')
		length++;

	ptr = malloc(sizeof(char) * (length + 1));/* +1 for null terminator*/
	if (ptr == NULL)
		return (NULL);

	while (i <= length)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
