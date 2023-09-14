#include "lists.h"

/**
  * get_dnodeint_at_index - gettting node at specific index
  * @head: pointer to the heaad node
  * @index: index of node to be returned
  * Return: node searched for or NULL if not found
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		if (index == count)
			return (ptr);
		ptr = ptr->next;
		count++;
	}

	return (NULL);
}
