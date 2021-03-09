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

	dog = malloc(sizeof(dog_t));
	if (dog != 0)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
		return (dog);

	}
	return (NULL);
}
