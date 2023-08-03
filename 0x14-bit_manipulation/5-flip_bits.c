#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: number checked
 * @m: number flipped
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int check;
	unsigned long int nice = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		check = nice >> i;
		if (check & 1)
			count++;
	}

	return (count);
}
