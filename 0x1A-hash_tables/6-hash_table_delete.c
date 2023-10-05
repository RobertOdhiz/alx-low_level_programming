#include "hash_tables.h"

/**
  * hash_table_delete -  Deletes a hash table
  * @ht: Hash table being checked
  * Return: Nothing
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long ind;
	hash_node_t *ptr, *temp;

	if (!ht)
		return;

	for (ind = 0; ind < ht->size; ind++)
	{
		ptr = ht->array[ind];
		while (ptr)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free (ht->array);
	free(ht);
}
