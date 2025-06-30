#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: input string to encode
 * Return: pointer to mod string
 */
char *leet(char *str)
{
	int str_index = 0;
	int leet_index = 0;
	char letters[] = "aAeEoOtTlL";
	char leet_code[] = "4433007711";

	while (str[str_index] != '\0')
	{
		leet_index = 0;
		while (letters[leet_index] != '\0')
		{
			if (str[str_index] == letters[leet_index])
			{
				str[str_index] = leet_code[leet_index];
				break;
			}
			leet_index++;
		}
		str_index++;
	}
	return (str);
}
