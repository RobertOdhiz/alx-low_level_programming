#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array using interpolation search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos;

    if (array == NULL || size == 0)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return ((int)pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    printf("Value checked array[%lu] is out of range\n", pos);
    return (-1);
}
