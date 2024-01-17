#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int prev = 0;

	if (array == NULL)
		return(-1);

	while (array[min(step, (int)size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(step, (int)size))
		{
			return (-1);
		}
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}

/**
 * min - returns the smaller value
 * @a: first value
 * @b: second value
 * Return: a or b
 */

int min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
