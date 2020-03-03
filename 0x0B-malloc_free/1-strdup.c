#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - give a pointer that point to a copy of string
 * @str: the string to copy
 * Return: NULL or p
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int j;
	int leng;

	leng = 0;
	i = 0;
	while (str[i] != '\0')
	{
		leng++;
		i++;
	}

	p = malloc(sizeof(char) * leng);
	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < leng)
	{
		p[j] = str[j];
		j++;
	}
	return (p);
	free(p);
}
