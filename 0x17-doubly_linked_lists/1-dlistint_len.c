#include "lists.h"

/**
  * dlistint_len - length of doubly linked list
  * @h: pointer to head node
  * Return: Length of doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
