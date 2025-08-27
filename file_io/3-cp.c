#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "check_args.c"
#include "open_helpers.c"

/**
 * main - entry point
 * @argc: arg count
 * @argv: ptr to argument str
 * Return: void
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buf[1024];
	ssize_t bytes_read, bytes_written;

	check_args(argc);
	fd_from = open_source(argv[1]);
	fd_to = open_dest(argv[2]);

	/* read from source and write to dest in 1024 bytes */
	while ((bytes_read = read(fd_from, buf, 1024)) > 0)
	{
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written != bytes_read || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	/* close file */
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
