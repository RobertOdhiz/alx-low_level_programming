#include <stdio.h>

/**
 * main - Prints file of the name it was compiled from
 *
 * Return: 0 for successs 1 otherwise
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
