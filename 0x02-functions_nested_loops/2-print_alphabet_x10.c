#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * returns 1 if true
 * returns -1 if false
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha = 'a';

	for (i = 0; i <= 10; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
