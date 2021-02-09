#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The first printed number.
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
