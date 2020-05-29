#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: They key
 * @value: Value to add
 * @Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *ht_node, *ptr_ht = NULL;

	index = hash_djb2((const unsigned char *) key);
	index = index % ht->size;
	ptr_ht = (ht->array)[index];
	ht_node = malloc(sizeof(hash_node_t));
	if (ht_node == NULL)
	{
		free(ht_node);
		return (0);
	}
	ptr_ht->next = ht_node;
	ht_node->key = strdup(key);
	ht_node->value = strdup(value);
	return(1);
}
