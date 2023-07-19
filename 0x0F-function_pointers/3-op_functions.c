#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: first integer
 * @b: Seond integer
 * Ruturn: sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: first integer
 * @b: Second integer
 * Return: Difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: second integer
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: first integer
 * @b: second integer
 * Return: Quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulus
 * @a:  first integer
 * @b: second integer
 * Return: Modulus
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
