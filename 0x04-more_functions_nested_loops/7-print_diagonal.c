#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of diagonals
 */

void print_diagonal(int n)
{
	int i, j;

	while (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (j == i)
				_putchar(92);
			else if (j < i)
				_putchar(32);
		}
		_putchar('\n');
		return;
	}
	_putchar('\n');
}
