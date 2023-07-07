#include "main.h"

/**
 * _strncpy - Copies a sttring
 * @dest: first string
 * @src: second string
 * @n: number of strings
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
