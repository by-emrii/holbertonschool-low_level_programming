#include "main.h"

/**
 * check_args - checks argument count
 * @argc: number of arguments
 * Return: void
 */

void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
