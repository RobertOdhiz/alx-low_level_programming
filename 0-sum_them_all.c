#include "variadic_functions.h"

/**
 * sum_them_all - sums up all it's parameters
 * @n: number of parameters,
 * Return: Sum of parameters or 0 if none
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_list add;
	va_start(add, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(add, int)
	}
	va_end(add);

	return (sum);
}
