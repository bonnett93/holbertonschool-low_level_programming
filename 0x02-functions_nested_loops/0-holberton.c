#include "holberton.h"

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char text[] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
