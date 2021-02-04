#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
