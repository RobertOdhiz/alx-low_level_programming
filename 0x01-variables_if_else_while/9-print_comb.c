#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int j = 0;
	
	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}