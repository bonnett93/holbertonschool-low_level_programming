#include "holberton.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The file to read.
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int buffer[1685];
	ssize_t bytes_read, bytes_write;

	if (!filename || filename[0] == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	close(fd);

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_read != bytes_write)
		return (0);

	return (bytes_read);
}
