#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - relocate a string
 * @ptr: string
 * @old_size: old size
 * @new_size: new size
 * Return: ptr, s, NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *s;
	unsigned int i;
	int *ptp;

	ptp = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	for (i = 0; i < old_size; i++)
		s[i] = ptp[i];
	free(ptr);
	return (s);
}
