#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_get - get the value of a specific key.
 * @ht: hash table.
 * @key: key.
 * Return: The value if it exist of NULL if doesnt.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = key_index((unsigned char *)key, ht->size);
	tmp = (ht->array)[index];
	tmp = tmp->next;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
		else
			tmp = tmp->next;
	}
	return (NULL);
}
