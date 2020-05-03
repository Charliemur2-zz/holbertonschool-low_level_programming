#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of the list.
 * @head: pointer to the first node.
 * @index: index of the node to return.
 * Return: the node or NULL if it doos not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0, i = 0;
	dlistint_t *tmp;

	tmp = head;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < index)
		return (NULL);
	tmp = head;
	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
