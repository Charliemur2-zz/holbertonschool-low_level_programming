#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of array
 * @c: char tu include
 * Return: NULL t
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
