#include "main.h"

/**
 * get_bit - Returns value of a bit at a given index
 * @n: Number converted to binary
 * @index: index checked
 *
 * Return: value at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}