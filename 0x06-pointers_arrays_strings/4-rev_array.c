#include "holberton.h"

/**
 * reverse_array - reverse a int array.
 * @a: the int array.
 * @n: number of elements in the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n--;
	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
