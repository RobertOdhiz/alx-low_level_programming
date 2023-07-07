#include <stdio.h>
#include <stdlib.h>

/**
 * main - main funtion
 * @argc: count of arguments supplied in cli
 * @argv: array of strings which are those arguments
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			prod = prod * atoi(argv[i]);
		printf("%d\n", prod);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
