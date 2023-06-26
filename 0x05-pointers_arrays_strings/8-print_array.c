#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer
 * @n: Integers
 */

void print_array(int *a, int n)
{
	int arr[n], i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i == (n - 1))
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
