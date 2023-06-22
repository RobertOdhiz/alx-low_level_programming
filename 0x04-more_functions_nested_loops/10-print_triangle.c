#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: triangle size
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y != size)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
}
