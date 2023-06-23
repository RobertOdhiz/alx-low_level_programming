#include "main.h"
#include <math.h>

/**
 * main - prints thelargest prime factor
 * Return: 0
 */

int main(void)
{
	long int n, x, i;

	n = 612852475143;
	x = -1;

	while (n % 2 == 0)
	{
		x = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			x = i;
			n /= i;
		}
	}
	if (n > 2)
		x = n;
	printf("%ld\n", x);
	return (0);
}
