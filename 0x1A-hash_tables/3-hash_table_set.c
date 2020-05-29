#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: They key
 * @value: Value to add
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *ht_node, *ht_ptr;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	ht_ptr = (ht->array)[index];
	while (ht_ptr != NULL)
	{
		if (strcmp(ht_ptr->key, key) == 0)
		{
			ht_ptr->value = strdup(value);
			return (1);
		}
		ht_ptr = ht_ptr->next;
	}
	ht_node = malloc(sizeof(hash_node_t));
	if (ht_node == NULL)
		return (0);
	ht_node->key = strdup(key);
	ht_node->value = strdup(value);
	ht_node->next = NULL;
	(ht->array)[index] = ht_node;
	return (1);
}
