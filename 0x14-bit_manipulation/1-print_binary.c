#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Binary representation
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	long int check = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (check <= num)
		check <<= 1;

	check >>= 1;

	while (check > 0)
	{
		_putchar((n & check) ? '1' : '0');
		check >>= 1;
	}
}
