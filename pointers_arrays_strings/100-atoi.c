#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a char
 * Return: int = num * sign
 */
int _atoi(char *s)
{
	int current_index = 0;
	int sign = 1;
	unsigned int number = 0;/*builds and stores the actual int value*/
	int number_started = 0; /*flag: becomes true (1) when it encounters digits*/

	while (s[current_index] != '\0')
	{
		if (s[current_index] == '-' && !number_started)
		{
			sign = sign * -1;
		}
		/*if current num is a digit*/
		else if (s[current_index] >= '0' && s[current_index] <= '9')
		{
			number_started = 1;/*set flag to true=number has started*/
			number = number * 10 + (s[current_index] - '0');
		}
		else if (number_started)
		{
			break;
		}
		current_index++;
	}
	if (sign == -1)
		return (-number);

	return (number);
}
