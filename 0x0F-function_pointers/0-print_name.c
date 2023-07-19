#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Provided name
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL &&  f != NULL)
		f(name);
}
