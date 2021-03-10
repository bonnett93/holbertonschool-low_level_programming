#include <stddef.h>
/**
 * int_index - searches fo an integer in an array.
 * @array: the array
 * @size: number of elements in array
 * @cmp: the function to do
 *
 * Return: The index of the first element for which the cmp does not return 0
 * -1 if size <= 0 or no element marches.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
