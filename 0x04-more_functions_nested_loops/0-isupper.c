#include "main.h"

/**
 * _isupper - prints uppercase letter
 * @c: value being checked
 * Return: 1 for uppercase letter and 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
