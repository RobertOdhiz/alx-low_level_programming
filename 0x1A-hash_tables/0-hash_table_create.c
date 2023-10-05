#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: Size of the new table
  * Return: Memory address of the created table
  * or NULL if failed
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *new_table;

	if (size < 1)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}

	for (; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
