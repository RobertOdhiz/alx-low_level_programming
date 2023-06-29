#include "main.h"

/**
 * reverse_array - Reverses the current array of integers
 * @a: an array of integers
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
