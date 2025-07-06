#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * posnum_check - checks if a string is positive number
 * @s: the string to check
 * Return: 1 if it's a positive number, 0 if not
 */
int posnum_check(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0); /*empty string*/
	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);/*if its a pos num*/
}
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: pointer to arg array
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!posnum_check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
