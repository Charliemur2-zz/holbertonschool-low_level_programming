#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print all the elements of listint
 * @h: node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
