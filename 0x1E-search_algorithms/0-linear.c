#include "search_algos.h"

/**
 * linear_search - a function that uses linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: The value to search for in the array
 * Return: first index of the value locatedotherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
