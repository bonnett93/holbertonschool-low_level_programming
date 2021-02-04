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
	int i = 97;
	int f = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (f < 91)
	{
		putchar(f);
		f++;
	}
	putchar(10);
	return (0);
}
