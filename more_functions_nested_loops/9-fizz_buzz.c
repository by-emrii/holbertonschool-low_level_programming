#include <stdio.h>
#include "main.h"
/**
 * fizzbuzz - prints number from 1 to 100 with fizzbuzz
 * Return: void
 */
void fizzbuzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
}
/**
 * main - entry point for the program
 * Return: 0 on success
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
