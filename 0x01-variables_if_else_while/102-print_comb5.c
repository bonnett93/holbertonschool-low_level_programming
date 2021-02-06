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
	int a, b;
	int s = 48;

	for (b = 0; b < 100; b++)
	{
		for (a = 0; a < 100; a++)
		{
			if (a > b)
			{
				putchar(b / 10 + s);
				putchar(b % 10 + s);
				putchar(' ');
				putchar(a / 10 + s);
				putchar(a % 10 + s);

				if (b < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
