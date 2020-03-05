#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size
 * Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
