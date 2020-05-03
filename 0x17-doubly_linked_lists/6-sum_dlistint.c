#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - returns the add of all the elements of the list.
 * @head: pointer to the first node.
 * Return: the result of add.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
