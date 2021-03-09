#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees dogs.
*
* @d: dog's adress.
*
* Return: Void.
*/
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
