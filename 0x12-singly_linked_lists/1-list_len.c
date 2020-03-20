#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - print all elements of a linked list
 * @h: Node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
