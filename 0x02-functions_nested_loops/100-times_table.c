#include "main.h"

/**
 * print_times_table - prints timetable for n
 * @n: value being checked
 * Return: ...
 */
void print_times_table(int n)
{
	int x, y, z, u, d;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > n)
			{
				d = z % 10;
				u = (z - d) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(u + '0');
				_putchar(d + '0');
			}
			else
			{
				if(y != 0)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
