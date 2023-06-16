#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	for ( n = 0; n < 10; n++)
	{
		char digitchar = '0' + n;
		
		putchar(digitchar);
	}
	printf("\n");	
	return (0);
}
