#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to find
 * Return: pointer of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int n_i;

	if (*needle == '\0')
		return (haystack);/*if needle is empty - return haystack*/
	/*Outer loop - loop thru haystack*/
	while (haystack[i] != '\0')
	{
		n_i = 0;
		/*comparing both haystack and needle index*/
		while (needle[n_i] != '\0' && haystack[i + n_i] == needle[n_i])
		{
			n_i++;
		}

		if (needle[n_i] == '\0')
		{
			return (&haystack[i]); /*full match is found*/
		}
		i++;
	}
	return (0); /*if no match found*/
}
