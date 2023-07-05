#include "main.h"

/**
 * _sqrt_recursion - Returns natural sqrt of a number
 * @n: Number being checked
 * Return: Square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - Calculates natural square root
 * @n: Number to get square root of
 * @i: Iterate number
 * Return: Natural sqrt
 */

int _sqrt(int n, int i)
{
	int root = i * i;

	if (root > n)
		return (-1);
	else if (root == n)
		return (i);
	return (_sqrt(n, i + 1));
}
