#include "main.h"

/**
 * print_number - prints an integer
 * @n: number being checked
 */

void print_number(int n)
{
	int x, y, z, p;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
		_putchar(n + '0');
	else if (n < 100)
	{
		x = n % 10;
		y = (n - x) / 10;
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else if (n < 1000)
	{
		x = n % 10;
		y = (n - x) % 100;
		z = (n - ((10 * y) + x)) / 100;
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0');
	}
	else if (n < 10000)
	{
		x = n % 10;
		y = (n - x) % 100;
		z = (n - ((10 * y) + x)) % 1000;
		p = (n - ((100 * z) + (10 * y) + x)) / 1000;
		_putchar(p + '0');
		_putchar(z + '0');
		_putchar(y + '0');
		_putchar(x + '0');
	}
	_putchar('\n');
}
