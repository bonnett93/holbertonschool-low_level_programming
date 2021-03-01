#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of to numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: An integer 0 if succes
*/

int main(int argc, char *argv[])
{
	int rest;

	if (argc == 3)
	{
		rest = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", rest);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
