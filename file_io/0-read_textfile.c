#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX std output
 * @filename: location of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	/* open file in read only */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* read into buf */
	bytes = read(fd, buf, letters);
	if (bytes == -1)
		return (0);

	/* write to std out */
	bytes = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
		return (0);

	if (close(fd) == -1)
		return (0);

	return (bytes);
}
