#include "holberton.h"
#include <stdio.h>
/**
 * main - print numbers from 1 to 100.
 * For multiples of three print Fizz instead of the number
 * For the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: void.
 */
int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		printf(" ");
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
