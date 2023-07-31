#include "lists.h"

/**
 * sum_listint - sums data of each node
 * @head: pointer to head node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
