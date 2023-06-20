#include "main.h"
/**
* _abs - Computes absolute value of an iteger
* @n:number being checked
* Return: result or 0
*/
int _abs(int n)
{
	if (n < 0)
	{
		int result;

		result = n * (-1);
		return (result);
	}
	else
		return (n);
}
