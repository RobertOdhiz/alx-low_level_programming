#include "lists.h"

/**
 * free_listint2 - frees linked list and sets head to null
 * @head: pointer to pointer to head
 *
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL || *head == NULL)
		return;

	while (ptr != NULL)
	{
		listint_t *nextNode = ptr->next;

		free(ptr);
		ptr = nextNode;
	}

	*head = NULL;
}
