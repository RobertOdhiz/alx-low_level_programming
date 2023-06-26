#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character being checked
 */

void puts_half(char *str)
{
	int i, j = 0, n;

	while (str[j] != '\0')
		j++;
	if (j % 2 == 0)
		for (i = j / 2; i < j; i++)
			_putchar(str[i]);
	else
	{
		n = (j - 1) / 2;
		n += 1;
		for (i = n; i <= j; i++)
			_putchar(str[i]);
	}
}
