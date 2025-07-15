#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform operations
 * @argc: num of arguments
 * @argv: arr of arguments
 *
 * Return: 0 on success, exits with status error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func_op = get_op_func(argv[2]);
	if (func_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func_op(num1, num2);
	printf("%d\n", result);
	return (0);
}
