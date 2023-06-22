#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				_putchar(j + '0');
			else
			{
				x = j % 10;
				y = (j - x) / 10;
				_putchar(y + '0');
				_putchar(x + '0');
			}
		}
		printf('\n');
	}
}
