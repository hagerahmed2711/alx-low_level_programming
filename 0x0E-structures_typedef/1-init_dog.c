#include "dog.h"

/**
 *
 * init_dog - initalizes a dog
 * @dog: the dog to initalize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;	
	}
}
