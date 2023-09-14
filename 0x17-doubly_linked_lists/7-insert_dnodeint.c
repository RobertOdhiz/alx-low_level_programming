#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts node at index specified
  * @h: pointer to head node
  * @idx: index
  * @n: value of node added
  * Return: new node added
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h;
	dlistint_t *prev_node = NULL;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = curr;

		if (curr != NULL)
			curr->prev = newNode;

		*h = newNode;
		return (newNode);
	}
	while (curr != NULL)
	{
		if (count == idx)
		{
			prev_node->next = newNode;
			newNode->prev = prev_node;
			newNode->next = curr;
			if (curr != NULL)
				curr->prev = newNode;
			return (newNode);
		}
		prev_node = curr;
		curr = curr->next;
		count++;
	}

	free(newNode);
	return (NULL);
}
