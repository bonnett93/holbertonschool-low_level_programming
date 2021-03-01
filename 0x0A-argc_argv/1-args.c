#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: An integer 0 if succes
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}