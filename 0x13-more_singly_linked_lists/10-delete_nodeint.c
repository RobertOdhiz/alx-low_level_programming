#include "lists.h"

/**
 * delete_nodeint_at_index - deleting node at index
 * @head: pointer to pointer to head node
 * @index: index checked
 *
 * Return: 1 for success and -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		count++;
		ptr = *head;
		while (ptr->next != NULL)
		{
			if (count == index)
			{
				temp = ptr->next;
				ptr->next = temp->next;
				free(temp);
				return (1);
			}
			count++;
			ptr = ptr->next;
		}
	}
	return (-1);
}
