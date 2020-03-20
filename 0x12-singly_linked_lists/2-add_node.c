#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - add a node in the beginning
 * @head: pointer points to first node
 * @str: string
 * Return: the adress of the element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int strleng = 0;

	while (str[strleng])
		strleng++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strleng;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
