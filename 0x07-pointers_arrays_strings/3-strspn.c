#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Initial segment
 * @accept: Second segment
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				break;
			j++;
		}
		if (!*(accept + j))
			return (i);
		i++;
	}
	return (i);
}
