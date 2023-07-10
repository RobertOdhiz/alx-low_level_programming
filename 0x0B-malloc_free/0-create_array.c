#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: Size of array
 * @c: Character to be initialized
 * Return: null if size is 0 and pointer to an array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	
	if (arr == NULL)
		return (NULL);
	for (i = 1; i < size; i++)
		arr[i] = c;
	return (arr);
}
