#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
			printf("%s", separator);
		printf("%d", va_arg(list, int));
	}

	va_end(list);
	printf("\n");
}
