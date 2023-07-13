#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmeb: Number of elements of an array
 * @size: Number of bytes
 * Return: pointer to located memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmeb * size);
	int i = 0;

	if (nmeb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	while (i < (nmeb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
