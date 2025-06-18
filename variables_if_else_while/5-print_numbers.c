#include <stdio.h>
/**
 * main - entry point
 * Des: for loop using putchar
 * Return: Success is 0
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}
	printf("\n");
	return (0);
}
