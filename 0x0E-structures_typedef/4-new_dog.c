#include "dog.h"
#include <stdlib.h>

char *cp_str(char *str, int len);

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
	int i, j;

	dog = malloc(sizeof(struct dog));
	if (dog != 0 && name != 0 && owner != 0)
	{
		for (i = 0; name[i]; i++)
			continue;
		for (j = 0; owner[j]; j++)
			continue;
		dog->name = cp_str(name, i + 1);
		if (dog->name == 0)
		{
			free(dog);
			return (0);
		}
		dog->age = age;
		dog->owner = cp_str(owner, j + 1);
		if (dog->owner == 0)
		{
			free(dog->name);
			free(dog);
			return (0);
		}
		return (dog);
	}
	return (0);
}

/**
 * cp_str - return a copy
 * @str: string
¨* @len: length
 * Return: char
*/
char *cp_str(char *str, int len)
{
	char *new_str;
	int i;

	new_str = malloc(len);
	if (new_str == 0)
		return (0);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	return (new_str);
}
