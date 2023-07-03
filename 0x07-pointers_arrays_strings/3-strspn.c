#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Initial segment
 * @accept: Second segment
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if (s == NULL || accept == NULL)
		return (len);
	while (*s && _strchr(accept, *s++))
		len++;
	return (len);
}
