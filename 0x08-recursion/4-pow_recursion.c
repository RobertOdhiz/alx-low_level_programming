#include "main.h"

/**
 * _pow_recursion - returns x power y
 * @x: base value
 * @y: power
 * Return: Value of x power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
