#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file.
 * @argc: Argument counter.
 * @argv: Argument vector.
 *
 * Return: 0 on success. 91, 98, 99 or 100 on failure.
 */

int main(int argc, char **argv)
{
	int fd1, fd2, byte_read, byte_write, buffer[1048], close_1, close_2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	byte_read = read(fd1, buffer, 1048);
	if (fd1 == -1 || byte_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_1 = close(fd1);
	if (close_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	fd2 = open(argv[2], O_RDWR | O_CREAT | O_EXCL, 0664);
	if (fd2 == -1)
	{
		fd2 = open(argv[2], O_RDWR | O_TRUNC);
	}
	byte_write = write(fd2, buffer, byte_read);
	if (fd2 == -1 || byte_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
	}
	close_2 = close(fd2);
	if (close_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (0);
}