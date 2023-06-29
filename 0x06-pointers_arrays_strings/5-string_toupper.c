#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @arr: string being changed
 * Return: Uppercase string
 */

char *string_toupper(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] = arr[i] - 32;
		i++;
	}
	return (0);
}
