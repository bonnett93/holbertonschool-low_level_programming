#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - prints a struct dog
*
* @d: The adress (pointer) struct to print
* Return: Void.
*/
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!d->age)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
