#include "main.h"

/**
 * print_square - prnts square
 * @size: size of square
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar(35);
		_putchar('\n');
	}
}

