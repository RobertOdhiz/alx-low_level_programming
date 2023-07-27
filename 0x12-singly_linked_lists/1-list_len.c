#include "lists.h"

/**
 * list_len - returns length of list
 * @h: pointer to head node
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
