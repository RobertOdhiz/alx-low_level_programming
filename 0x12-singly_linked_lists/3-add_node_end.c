#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the end of list
 * @head: pointer to head pointer
 * @str: string to be duplicated
 *
 * Return: address of added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *ptr = *head;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	newNode->len = count;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = newNode;
	}

	return (newNode);
}
