#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Create a dog basic documentation
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dogś owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
