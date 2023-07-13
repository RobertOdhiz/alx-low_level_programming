#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory block
 * @ptr: Pointer to previous allocated memory
 * @old_size: Size of ptr
 * @new_size: New size of ptr
 * Return: Memory address of ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *temp;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	temp = malloc(new_size);

	if (temp == NULL)
		return (NULL);

	for (; i < old_size && i < new_size; i++)
		temp[i] = ((char *) ptr)[i];

	free(ptr);
	return (temp);
}
