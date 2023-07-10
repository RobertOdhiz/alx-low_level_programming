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

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(char));
	arr[0] = c;
	return (arr);
}
