#include "hash_tables.h"

/**
  * hash_table_set - Adds an elemnt to the hash table
  * @ht: hash table being set
  * @key: Key for the value
  * @value: value set
  * Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;
	int check;

	if (!ht || !key || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	check = create_node(key, value, new_node);

	if (check == 0)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
  * create_node - Creates a new node
  * @key: key for the new node
  * @value: value for new node
  * @temp: pointer to the new node
  * Return: 1 for success 0 otherwise
  */

int create_node(const char *key, const char *value, hash_node_t *temp)
{
	if (!temp)
		return (0);

	temp->key = strdup(key);
	if (!temp->key)
	{
		free(temp);
		return (0);
	}

	temp->value = strdup(value);
	if (!temp->value)
	{
		free(temp->key);
		free(temp);
		return (0);
	}

	return (1);
}
