#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to header
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		listint_t *nextNode = ptr->next;

		free(ptr);
		ptr = nextNode;
	}
}
