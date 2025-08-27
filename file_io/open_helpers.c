#include "main.h"

/**
 * open_source - opens source file for reading
 * @file_from: source file name
 * Return: file descriptor
 */
int open_source(char *file_from)
{
	int fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return fd;
}

/**
 * open_dest - opens/creates destination file
 * @file_to: destination file name
 * Return: file descriptor
 */
int open_dest(char *file_to)
{
	int fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return fd;
}
