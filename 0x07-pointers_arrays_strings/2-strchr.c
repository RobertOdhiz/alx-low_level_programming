#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string being checked
 * @c: character being checked
 * Return: Character
 */

char *_strchr(char *s, char c)
{
	while (*s !=  c  && *s != '\0')
		s++;
	if (*s ==  c)
		return (s);
	else
		return (NULL);
}
