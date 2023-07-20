#include "variadic_functions.h"

/**
 * print_all - Prints everything
 * @format: format of arguments
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int count = 0, i = 0;
	va_list list;
	char choice;

	while (format[count])
		count++;

	va_start(list, count);

	while (i < count)
	{
		i = 0;
		format[i] = choice;
		if (choice == 'i' ||
			choice == 'c' ||
			choice == 'f' ||
			choice == 's')
		{
			switch (choice){
				case 'c':
					printf("%c", va_arg(list, char));
					break;
				case 'i':
					printf("%d", va_arg(list, int));
					break;
				case 'f':
					printf("%f", va_arg(list, float));
					break;
				case 's':
					char *str = va_arg(list, char *);

					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
				}
		}
		i++;
	}
}
