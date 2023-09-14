#include "lists.h"

/**
  * add_dnodeint - add node at the beginning at the node
  * @head: pointer to head node
  * @n: value of node
  * Return: the new node
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
		newNode->next = NULL;
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}

	*head = newNode;

	return (newNode);
}
