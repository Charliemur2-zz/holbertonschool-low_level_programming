#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free memory of list_t
 * @head: pointer to first node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
