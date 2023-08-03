#include "main.h"

/**
 * set_bit - sets a bit at a certain index to 1
 * @n: Number converted to binary
 * @index: Index checked
 *
 * Return: converted binary
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int change = 1UL << index;

	*n |= change;
	return (int)(*n);
}
