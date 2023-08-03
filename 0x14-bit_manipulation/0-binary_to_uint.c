#include "main.h"

/**
 * binary_to_uint - converts bbinary to unsigned int
 * @b: string with binary in it
 *
 * Return: 0 or decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int len = 0, i, k;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = 0, k = len - 1; b[i] != '\0' &&
			k >= 0; i++, k--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			val += pow(2, k);
	}

	return (val);
}
