#include "main.h"
#include <stlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: Array of integers
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, j = 0;

	if (min > max)
		return (NULL);

	j = (sizeof(int) * (max - min)) + sizeof(int);;
	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);

	while (min <= max && i < j)
	{
		ptr[i] = min;
		i++
		min++;
	}

	return (ptr);
}
