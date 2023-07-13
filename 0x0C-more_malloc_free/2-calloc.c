#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements of an array
 * @size: Number of bytes
 * Return: pointer to located memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, prod = 0;

	prod = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(prod);
	if (ptr == NULL)
		return (NULL);

	while (i < prod)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
