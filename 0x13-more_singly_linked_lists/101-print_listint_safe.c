#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: pointer to head
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr;

	if (head == NULL)
		return (count);

	ptr = head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
