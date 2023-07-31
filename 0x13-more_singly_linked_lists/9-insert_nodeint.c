#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at specified index
 * @head: pointer to pointer to head node
 * @idx: index checked
 * @n: New  node data
 *
 * Return: memory address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = *head;
		newNode->n = n;
		*head = newNode;
	}
	else
	{
		count++;
		ptr = *head;
		while (ptr != NULL)
		{
			if (count == idx)
			{
				newNode->next = ptr->next;
				newNode->n = n;
				ptr->next = newNode;
				return (newNode);
			}
			count++;
			ptr = ptr->next;
		}
	}
	return (newNode);
}
