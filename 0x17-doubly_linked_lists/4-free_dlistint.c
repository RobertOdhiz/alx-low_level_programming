#include "lists.h"

/**
  * free_dlistint - freeing a doubly linked list
  * @head: pointer to head node
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	head = NULL;
}
