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
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
