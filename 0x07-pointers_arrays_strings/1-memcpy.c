#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Where memory is to be copied to
 * @src: Where merory is copied from
 * @n: Number of bytes
 * REturn: Character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
