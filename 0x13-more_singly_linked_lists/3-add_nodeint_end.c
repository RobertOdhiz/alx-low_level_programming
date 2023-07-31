#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: pointer to pointer to head node
 * @n: integer in struct
 *
 * Return: Memory address of newNode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!newNode)
		return (NULL);

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newNode;
	}

	newNode->n = n;
	return (newNode);
}
