#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: format argument
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	char choice, *str;
	va_list list;
	int i = 0;
	double num;

	va_start(list, format);

	while (format && format[i])
	{
		choice = format[i];

		switch (choice)
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			num = va_arg(list, double);
			printf("%f", num);
			break;
		case 's':
			str = va_arg(list, char *);

			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
