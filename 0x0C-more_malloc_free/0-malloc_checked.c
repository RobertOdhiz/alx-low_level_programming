#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of blocks
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	if (b <= 0)
		exit(98);
	malloc(b);
}
