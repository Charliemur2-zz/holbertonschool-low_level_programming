#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - insert a node at the end of the list.
 * @head: pointer to first nodeof the list.
 * @n: content of newnode.
 * Return: newnode address or NULL if it falied.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
		newnode->prev = tmp;
		newnode->next = NULL;
	}
	return (newnode);
}
