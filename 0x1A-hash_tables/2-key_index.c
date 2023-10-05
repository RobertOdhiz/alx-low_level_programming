#include "hash_tables.h"

/**
  * key_index - Gives you the index of the privided key
  * @key: key
  * @size:size of the array of the hash table
  * Return: Index of the key
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	if (key == NULL || size == 0)
		return (0);

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
