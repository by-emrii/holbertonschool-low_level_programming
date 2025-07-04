#include "main.h"
#include <stdio.h>
/**
 * main - print name of program
 * @argc: argument count
 * @argv: pointer to array of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /*tell compiler argc not used to silence unused parameter warnings*/
	printf("%s\n", argv[0]);
	return (0);
}
