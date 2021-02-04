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
	char text[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 0;

	for (i; i < 27; i++)
	{
		putchar(text[i]);
	}
	putchar("\n");
	return (0);
}
