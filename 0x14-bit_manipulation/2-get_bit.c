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
	unsigned int count = 0;
	unsigned long int modulus;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	while (n > 0 || count <= index)
	{
		modulus = n % 2;
		n /= 2;

		if (count == index)
			return (modulus);
		count++;
	}
	return (-1);
}
