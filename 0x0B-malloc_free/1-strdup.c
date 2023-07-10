#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns pointer to newly allocated space in memory
* @str: string to be copied
* Return: pointer to new string or NULL if str is NULL
*/

char *_strdup(char *str)
{
	unsigned int i = 1, count = 0;
	char *arr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	arr = (char *)malloc((sizeof(char) * i) + 1);

	if (arr == NULL)
		return (NULL);
	while (count < i)
	{
		arr[count] = str[count];
		count++;
	}

	arr[count] = '\0';
	return (arr);
}
