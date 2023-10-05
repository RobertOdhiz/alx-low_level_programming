#include "hash_tables.h"

/**
  * hash_table_print - Prints the key value pairs of a hash table
  * @ht: The hash table being checked
  * Return: Nothing
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	int check = 1;

	if (!ht)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (!check)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			check = 0;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
