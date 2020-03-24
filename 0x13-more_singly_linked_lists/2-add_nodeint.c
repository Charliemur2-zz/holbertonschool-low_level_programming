#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - ad a node at the beginnign of a linked list
 * @head: pointer to pointer to first node
 * @n: data in node
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
