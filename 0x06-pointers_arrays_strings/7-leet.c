#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String being encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i, j;
	char s1[] = {'a','A','e','E','o','O','t','T','l','L'};
	char s2[] = {'4','4','3','3','0','0','7','7','1','1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
	}
	return (str);
}
