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

	if (size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(char) * (size + 1));

	i = 0;
	while (i < size)
	{
		t[i] = c;
		i++;
	}
	t[i] = '\0';
	return (t);
}
