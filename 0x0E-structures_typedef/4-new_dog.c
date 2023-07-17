#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: First par
 * @age: Second par
 * @owner: Third parameter
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
