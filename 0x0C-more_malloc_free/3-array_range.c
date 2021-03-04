#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: Number to start the array range.
 * @max: Number to finish the array range (include).
 *
 * Return: pointer to a newly allocated space in memory,
 * On error, NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
	{
		return (0);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
