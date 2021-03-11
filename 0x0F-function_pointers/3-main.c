#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - performs aritmetic operations from terminal
 * @argc: the number of arg passed
 * @argv: array of arguments
 *
 * Return: 0 if succes
 * exit 98 if number of arguments ar wrong.
 * exit 99 if the operator is incorrect.
 * exit 100 if user tris to divide by 0.
*/
int main(int argc, char *argv[])
{
	int answer;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	answer = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", answer);
	return (0);
}
