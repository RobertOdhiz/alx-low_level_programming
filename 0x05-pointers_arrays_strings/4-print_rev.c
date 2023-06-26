#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character being checked
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	for (index -= 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
