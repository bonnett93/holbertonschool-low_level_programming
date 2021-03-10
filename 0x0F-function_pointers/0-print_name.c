#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: A function that print the name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
