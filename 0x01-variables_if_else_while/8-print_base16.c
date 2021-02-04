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
	int i = 48;
	int f = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (f < 103)
	{
		putchar(f);
		f++;
	}
	putchar(10);
	return (0);
}
