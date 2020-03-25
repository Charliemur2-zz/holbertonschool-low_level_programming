#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node in the nth given position
 * @head: pointer to a pointer to the first node
 * @idx: the position for insert the node
 * @n: the n data of the newnode
 * Return: NULL or newnode
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *newnode;
	unsigned int i = 0, leng = 0;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		leng++;
	}
	if (idx > leng)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (idx == 0)
	{
		tmp = *head;
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	i = 0;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	newnode->n = n;
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}
