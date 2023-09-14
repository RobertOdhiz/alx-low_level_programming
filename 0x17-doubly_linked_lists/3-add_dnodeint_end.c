#include "lists.h"

/**
  * add_dnodeint_end - adding node at the end of list
  * @head: pointer to head node pointer
  * @n: value of new node
  * Return: New Node
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		dlistint_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
	}

	return (newNode);
}
