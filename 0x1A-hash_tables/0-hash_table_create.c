#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a new hash table
 * @size: rhe size of the array in the hash table
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_table_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);
}