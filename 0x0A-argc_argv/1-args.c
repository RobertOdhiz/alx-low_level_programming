#include <stdio.h>

/**
 * main - main function
 * @argc: count of arguments
 * @argv: array of poignters to strings which are those arguments
 * Return: always 0 for success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
