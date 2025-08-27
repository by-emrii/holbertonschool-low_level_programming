#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * if text_content is NULL, do not add anything to the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int written; /* how many bytes written */
	int len = 0;

	if (filename == NULL)
		return (-1);

	/* open file with append */

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	/* if text content not null, count length*/
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		/* write content into file created */
		written = write(fd, text_content, len);
		if (written == -1 || written != len)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}
