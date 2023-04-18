#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - decribe a new type of dog
 * @name: parameter for name
 * @age: parameter for age
 * @owner: parameter for owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - define new name for type struct dog
 */
typedef struct dog dog_t;

#endif
