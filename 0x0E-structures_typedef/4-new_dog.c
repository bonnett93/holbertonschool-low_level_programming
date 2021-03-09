#include "dog.h"
#include <stdlib.h>

/**
* *new_dog -  creates a new dog.
*
* @name: element name
* @age: element age
* @owner: Element owner
*
* Return: Void.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));
	if (dog != 0 && name != 0 && owner != 0)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
		return (dog);
	}
	return (0);
}
