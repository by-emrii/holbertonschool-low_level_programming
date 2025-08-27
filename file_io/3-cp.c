#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
	ssize_t bytes_read = 1024, bytes_written = 0;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/* open source for reading */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* open or create dest file for writing */
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	/* read from source and write to dest in 1024 bytes */
	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buf, 1024);
		/* check read error */
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(fd_to, buf, bytes_read);
		if (bytes_written < bytes_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	/* close file */
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
