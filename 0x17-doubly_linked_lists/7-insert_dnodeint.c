#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node at the given position.
 * @h: pointer to first node.
 * @idx: position to insert the new node.
 * @n: content of the new node.
 * Return: The address of the new node or NULL if it falied.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0, i = 0;
	dlistint_t *newnode, *tmp;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	 newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	if (idx == 0)
	{
		newnode = add_dnodeint(*&h, n);
	}
	else if (idx == len)
	{
		newnode = add_dnodeint_end(*&h, n);
	}
	else
	{
		while (i < (idx - 1))
		{
			tmp = tmp->next;
			i++;
		}
		if (i == (idx - 1))
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			newnode->prev = tmp;
			newnode->next->prev = newnode;
		}
	}
	return (newnode);
}
