#include  "main.h"

/**
 * is_prime_number - Checks for prime number
 * @n: Number being checked
 * Return: Return 1 if number is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - Finds prime mumber
 * @n: Number checked
 * @i: iteration times
 * Return: 1 for prime 0 otherwise
 */

int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && i > 1)
		return (0);
	else if ((n / i) < i)
		return (1);
	return (_prime(n, i + 1));
}
