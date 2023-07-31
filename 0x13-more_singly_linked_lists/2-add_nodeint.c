#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of the list
 * @head: pointer to the pointer to head
 * @n: data in structure linked list
 *
 * Return: memory address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (*head == NULL)
		*head = newNode;
	else
	{
		newNode->next = *head;
		*head = newNode;
	}

	newNode->n = n;

	return (newNode);
}
