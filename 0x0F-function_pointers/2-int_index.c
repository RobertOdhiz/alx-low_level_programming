#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array checked
 * @size: Size of the array
 * @cmp: pointer to a function
 * Return: Index of integer, -1 if not found
 * or number is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
