#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the number of arg passed
 * @a: first number
 * @b: second number
 *
 * Return: pointer to the function that corresponds.
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
