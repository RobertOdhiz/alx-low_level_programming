#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at beginning of list
 * @head: pointer to the memory address of head
 * @str: string to be duplicated
 * Return: memory address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
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
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
