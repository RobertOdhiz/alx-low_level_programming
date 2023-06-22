#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
				_putchar(i + '0');
			else
			{
				x = i % 10;
				y = (i - x) / 10;
				_putchar(y + '0');
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
