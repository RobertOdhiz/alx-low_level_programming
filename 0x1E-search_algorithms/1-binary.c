#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using bs
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value being searched for
 * Return: index of the value being searched for and -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, right = size - 1, left = 0, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
