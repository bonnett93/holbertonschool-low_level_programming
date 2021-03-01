#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the multiplication of to numbers.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: An integer 0 if succes
*/

int main(int argc, char *argv[])
{
	int i, j;
	int rest = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]))
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			rest += atoi(argv[i]);
		}
	}
	printf("%d\n", rest);
	return (0);
}
