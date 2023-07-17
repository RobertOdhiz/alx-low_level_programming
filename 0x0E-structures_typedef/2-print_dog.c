#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to d
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
