#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array checked
 * @size: Size of the array
 * @cmp: pointer to a function
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (array != NULL && cmp !=NULL)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
