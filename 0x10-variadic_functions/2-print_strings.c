#include "variadic_functions.h"

/**
 * print_strings - Prints a list of strings followed
 * by a new line
 * @separator: string printed between strings
 * @n: number of arguments(strings)
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(list);

	printf("\n");
}
