#include "main.h"

/**
 * main - prints numbers fom 1 to 100
 * for multiples of 3 prints fizz
 * for multiples of 5 prints buzz
 * for multiples of both 3 and 5 prints fizzbuzz
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && ((i % 5) != 0))
			printf(" Fizz");
		else if ((i % 5) == 0 && ((i % 3) != 0))
			printf(" Buzz");
		else if (((i % 3) == 0) && ((i % 5 == 0)))
			printf(" FizzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	printf("\n");
	return (0);
}
