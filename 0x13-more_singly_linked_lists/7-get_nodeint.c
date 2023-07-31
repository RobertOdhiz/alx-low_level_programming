#include "lists.h"

/**
 * get_nodeint_at_index - gets node at nth index
 * @head: ponter to pointer to head
 * @index: index checked
 *
 * Return: memory address of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		if (count == index)
		{
			return (ptr);
		}
		count++;
		ptr = ptr->next;
	}

	return (NULL);
}
