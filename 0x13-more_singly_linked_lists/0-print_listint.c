#include "lists.h"

/**
 * print_listint - prints contents of listint
 * @h: pointer to head node
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
