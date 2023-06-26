#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: character being checked
 */

void rev_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count -= 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
