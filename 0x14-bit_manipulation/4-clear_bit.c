#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a certain index to 0
 * @n: pointer to an integer
 * @index: index checked
 *
 *
 * Return: New number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
