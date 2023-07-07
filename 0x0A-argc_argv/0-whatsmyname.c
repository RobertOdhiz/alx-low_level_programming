#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments supplied
 * @argv: Array of pointers to the string which are those arguments
 * Return: 0 for success and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
