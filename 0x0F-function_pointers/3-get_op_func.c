#include "3-calc.h"

/**
 * get_op_func - pointer to a function
 * @a: first input
 * @b: second input
 * Return: integer
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
