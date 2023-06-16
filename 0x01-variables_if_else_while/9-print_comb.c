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
	
	for ( n = 0; n < 10; n++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + n);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
