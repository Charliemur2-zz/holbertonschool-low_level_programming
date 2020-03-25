#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - get the int in the nth node
 * @head: pointer to first node
 * @index: number of the node
 * Return: the n data in the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0, length = 0;

	temp = head;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (index > length)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
