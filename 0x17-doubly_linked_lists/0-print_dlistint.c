#include "lists.h"
#include <stdlib.h>
/**
  * print_dlistint - Prints doubly linked list
  * @h: pointer to the head
  * 
  * Return: size of the linked list
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
