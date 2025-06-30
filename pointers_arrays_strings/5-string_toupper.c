#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @arr: input array of char
 * Return: pointer to string
 */
char *string_toupper(char *arr)
{
	int count = 0;

	while (arr[count] != '\0')
	{
		if (arr[count] >= 'a' && arr[count] <= 'z')
		{
			arr[count] = arr[count] - 32;
		}
		count++;
	}
	return (arr);
}
