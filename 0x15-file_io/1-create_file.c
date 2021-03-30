#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * create_file - Creates a file or trunc if exists.
 * @filename: The file to create or open.
 * @text_content: Text to copy in filename text.
 *
 * Return: the actual number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int byte_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
	{
		fd = open(filename, O_RDWR | O_TRUNC);
		if (fd == -1)
			return (-1);
	}

	if (!text_content)
		return (1);

	byte_write = write(fd, text_content, strlen(text_content));
	if (byte_write == -1)
		return (-1);

	return (1);
}
