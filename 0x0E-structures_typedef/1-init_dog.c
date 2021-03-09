#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize a variable of type struct dog
*
* @d: The adress (pointer) variable to initializate
* @name: element name
* @age: element age
* @owner: Element owner
*
* Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
