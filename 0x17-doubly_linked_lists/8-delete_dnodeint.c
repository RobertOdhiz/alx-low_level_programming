#include "lists.h"

/**
  * delete_dnodeint_at_index - deleting node at index
  * @head: pointer to head node
  * @index: index
  * Return: 1 if succeded and -1 if fail
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (count < index && ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	if (ptr == NULL)
		return (-1);

	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}
