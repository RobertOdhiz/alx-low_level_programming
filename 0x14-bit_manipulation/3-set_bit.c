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
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
