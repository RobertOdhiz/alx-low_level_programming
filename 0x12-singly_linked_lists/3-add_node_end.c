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

	while (ptr != NULL)
		ptr = ptr->next;

	newNode->next = NULL;
	ptr = newNode;

	return (newNode);
}
