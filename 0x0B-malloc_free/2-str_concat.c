#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to new string or NULL if str is NULL
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, l = 0, m = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);

	j = 0;
	while (m < l)
	{
		if (m <= i)
			s[m] = s1[m];
		if (m >= i)
		{
			s[m] = s2[j];
			j++;
		}

		m++;
	}

	s[m] = '\0';
	return (s);
}
