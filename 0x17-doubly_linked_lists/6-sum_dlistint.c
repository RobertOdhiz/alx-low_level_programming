#include "lists.h"

/**
  * sum_dlistint - adds all data of the linked list
  * @head: pointer to the head node
  * Return: sum
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
