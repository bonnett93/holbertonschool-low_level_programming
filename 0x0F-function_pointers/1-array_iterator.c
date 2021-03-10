#include <stddef.h>
/**
 * array_iterator - executes a function given on each element of an array.
 * @array: the array
 * @size: number of elements in array
 * @action: the function to do
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || size == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
