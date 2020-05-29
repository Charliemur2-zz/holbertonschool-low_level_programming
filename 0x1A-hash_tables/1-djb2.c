#include "hash_tables.h"
/**
 * hash_djb2 - hash function to create the index.
 * @str: string for value in hash table
 * number of the index in witch the value is alocated
 * Return: hash number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
