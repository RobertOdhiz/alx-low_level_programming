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
	int temp;

	if (head == NULL || *head == NULL)
		return (0);

	*head = ptr->next;
	temp = ptr->n;
	free(ptr);
	return (temp);
}
