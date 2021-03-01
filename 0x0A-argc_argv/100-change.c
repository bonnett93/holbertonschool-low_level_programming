#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: An integer 0 if succes
*/

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int suma = 0;
	int total_coins = 0;
	int i;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/**
	for (i = 0; argv[1][i]; i++)
	{
		if (isdigit(argv[1][i]))
			continue;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
*/
	cents = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		while (suma < cents)
		{
			if (suma + coins[i] <= cents)
			{
				suma += coins[i];
				total_coins += 1;
			}
			else
				break;
		}
	}
	printf("%d\n", total_coins);
	return (0);
}
