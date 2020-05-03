#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - ad new node at the begining.
 * @head: pointer to head of the list.
 * @n: content of newnode.
 * Return: NULL if it fails or newnode.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
		newnode->next->prev = newnode;
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
