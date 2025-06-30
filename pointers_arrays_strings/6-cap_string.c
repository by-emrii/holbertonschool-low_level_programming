#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string of characters
 * Return: str
 */
char *cap_string(char *str)
{
	int count = 0;
	int cap_next = 1;/*flag - 1 to cap letter, 0 to not*/

	while (str[count] != '\0')
	{	/*check for separators*/
		if (
				str[count] == ' ' || str[count] == ';' || str[count] == '.' ||
				str[count] == '!' || str[count] == '!' || str[count] == '?' ||
				str[count] == '"' || str[count] == '(' || str[count] == ')' ||
				str[count] == '{' || str[count] == '}' || str[count] == '\t' ||
				str[count] == '\n'
		   )
		{
			cap_next = 1;/*flag if curr char is sep*/
		}
		/*if flag is 1 AND char is lowercase,convert to uppercase, reset flag to 0*/
		else if (cap_next && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] = str[count] - 32;
			cap_next = 0;
		}
		else
		{
			cap_next = 0;
		}
		count++;
	}
	return (str);
}
