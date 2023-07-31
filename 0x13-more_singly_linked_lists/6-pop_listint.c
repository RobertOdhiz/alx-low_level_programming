#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer topointer to the head node
 *
 * Return: the head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int temp = ptr->n;

	if (head == NULL || *head == NULL)
		return (0);

	*head = ptr->next;
	free(ptr);
	return (temp);
}
