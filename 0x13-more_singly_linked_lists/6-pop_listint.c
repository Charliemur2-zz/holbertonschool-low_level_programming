#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - delete the head node
 * @head: pointer to pointer to the first node
 * Return: 0 if is NULL and n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
