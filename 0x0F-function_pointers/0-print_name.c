#include <stddef.h>
/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: A function that print the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
