#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
