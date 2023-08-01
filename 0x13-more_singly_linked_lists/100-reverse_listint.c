#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to head pointer
 *
 * Return: memory addresss of first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);

	if (*head->next == NULL)
		return (*head);

	ptr = NULL;
	while ((*head) != NULL)
	{
		temp = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = temp;
	}
	*head = ptr;
	return (*head);
}
