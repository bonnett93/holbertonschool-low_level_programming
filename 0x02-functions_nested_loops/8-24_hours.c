#include "holberton.h"
/**
 * jack_bauer- prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: void.
 */
void jack_bauer(void)
{
	int hora;
	int minuto;

	for (hora = 0; hora < 24; hora++)
	{
		for (minuto = 0; minuto < 60; minuto++)
		{
			_putchar((hora / 10) + 48);
			_putchar((hora % 10) + 48);
			_putchar(':');
			_putchar((minuto / 10) + 48);
			_putchar((minuto % 10) + 48);
			_putchar('\n');
		}
	}
}
