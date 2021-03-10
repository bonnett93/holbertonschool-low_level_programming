#include <stddef.h>
/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: A function that print the name
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
