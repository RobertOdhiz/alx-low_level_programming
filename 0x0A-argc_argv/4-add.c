#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main funtion
 * @argc: count of arguments supplied in cli
 * @argv: array of strings which are those arguments
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0, j;
	char *sel;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sel = argv[i];
			for (j = 0; j < strlen(sel); j++)
			{
				if (sel[j] < 48 || sel[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(sel);
			sel++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
