#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - add a node in the end
 * @head: pointer points to first node
 * @str: string
 * Return: the adress of the element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int strleng = 0;

	while (str[strleng])
		strleng++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strleng;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
