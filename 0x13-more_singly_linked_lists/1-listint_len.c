#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len -  return the number of nodes
 * @h: node
 * Return: node
 */

size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
