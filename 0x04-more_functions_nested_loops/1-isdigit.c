#include "main.h"

/**
 * _isdigit - returns digits
 * @c: value being checked
 * Return: 1 for digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
