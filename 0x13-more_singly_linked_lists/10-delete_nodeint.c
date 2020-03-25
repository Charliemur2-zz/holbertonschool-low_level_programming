#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete a node in a given index
 * @head: pointe to a pointer to a first node
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *tmp1;
	unsigned int i = 0, leng = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		leng++;
	}
	if (index > leng)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	tmp = tmp1 = *head;
	while (i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}
	tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);
	return (1);
}
