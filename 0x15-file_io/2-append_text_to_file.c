#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: Text to append in filename text.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_write;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	byte_write = write(fd, text_content, strlen(text_content));
	if (byte_write == -1)
		return (-1);

	return (1);
}
