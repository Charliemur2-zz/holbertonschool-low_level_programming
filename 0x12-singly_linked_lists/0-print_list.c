#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print all elements of a linked list
 * @h: Node
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", 0);
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
