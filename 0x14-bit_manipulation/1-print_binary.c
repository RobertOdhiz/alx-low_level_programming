#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Binary representation
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int check = 1UL << (sizeof(long int) * 8 - 1);
	int counted = 0;

	while (check > 0)
	{
		if (n & check)
			_putchar('1');
		else
			_putchar('0');

		counted = 1;
		check >>= 1;
	}

	if (!counted)
		_putchar('0');
}
