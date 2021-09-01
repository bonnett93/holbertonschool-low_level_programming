#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value is the value to search for.
 * Return: the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, l = 0, r = size - 1;
	int half = (l + r) / 2;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (value == array[half])
			return (half);
		else if (value < array[half])
			r = half - 1;
		else
			l = half + 1;
		half = (l + r) / 2;
	}
	return (-1);
}
