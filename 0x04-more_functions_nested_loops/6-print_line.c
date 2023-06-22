#include "main.h"

/**
 * print_line - prints line
 * @n: number of times _ should be displayed
 */

void print_line(int n)
{
	int i;

	while (n != 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		n = 0;
	}
	_putchar('\n');
}
