#include "main.h"

/**
 * print_square - prnts square
 * @size: size of square
 */

void print_square(int size)
{
	int x, y;

	if(size <= 0)
		_putchar('\n');
	while (size >= 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar(35);
			_putchar('\n');
		}
		size = 0;
	}
}
