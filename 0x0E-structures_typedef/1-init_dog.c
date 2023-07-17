#include "dog.h"

/**
 * init_dog - Initializes a variable dog
 * @d: pointer to the structure dog
 * @name: pointer to the name
 * @age: age
 * @owner: pointer to member owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
