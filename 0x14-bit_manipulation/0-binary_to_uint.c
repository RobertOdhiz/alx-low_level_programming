#include "main.h"

/**
 * power - gives the power of a function
 * @num: Number checked
 * @exponent: Exponent used
 *
 * Return: nothing
 */

int power(int num, int exponent)
{
	int res = 1;

	if (exponent == 0)
		return (1);
	else if (exponent < 0)
	{
		num = 1 / num;
		exponent = -exponent;
	}

	while (exponent > 0)
	{
		if (exponent % 2 == 1)
			res *= num;
		num *= num;
		exponent /= 2;
	}

	return (res);
}

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
			val += power(2, k);
	}

	return (val);
}
