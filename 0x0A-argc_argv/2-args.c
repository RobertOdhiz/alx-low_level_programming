#include <stdio.h>

/**
 * main - main funtion
 * @argc: count of arguments supplied in cli
 * @argv: array of strings which are those arguments
 * Return: always 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
