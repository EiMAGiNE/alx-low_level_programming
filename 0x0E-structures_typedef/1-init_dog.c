#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: parameter for dog
 * @name: parameter for name
 * @age: parameter for age
 * @owner: parameter for owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
